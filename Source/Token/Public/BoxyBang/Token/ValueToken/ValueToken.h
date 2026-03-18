#pragma once

#include <BoxyBang/Token/Token.h>
#include <optional>
#include <type_traits>
#include <utility>

namespace BoxyBang
{
namespace Token
{

template <typename T>
    requires std::is_move_constructible_v<T> &&
             std::is_default_constructible_v<T>
class CValueToken : public BoxyBang::Token::CToken
{
  public:
    explicit CValueToken(T&& Value)
        : Value(std::move(Value))
    {
    }

    CValueToken& operator=(const CValueToken&) =
        delete;

    CValueToken& operator=(CValueToken&&) = delete;

    CValueToken(const CValueToken&) = delete;

    CValueToken(CValueToken&&) = delete;

    ~CValueToken() override = default;

  protected:
    [[nodiscard]] const T& GetValue() const
    {
        return Value.value();
    }

  private:
    std::optional<T> Value = std::nullopt;
};
} // namespace Token
} // namespace BoxyBang