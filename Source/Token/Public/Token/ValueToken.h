#pragma once

#include <type_traits>
#include <utility>

namespace BoxyBang
{
namespace Token
{
template <typename T>
    requires std::is_move_constructible_v<T> &&
             std::is_default_constructible_v<T>
class ValueToken
{
  public:
    explicit ValueToken(T&& value)
        : m_value(std::move(value))
    {
    }

    ValueToken& operator=(const ValueToken&) = default;
    ValueToken& operator=(ValueToken&&) = default;
    ValueToken(const ValueToken&) = default;
    ValueToken(ValueToken&&) = default;
    virtual ~ValueToken() = default;

  protected:
    [[nodiscard]] inline const T& GetValue() const
    {
        return m_value;
    }

  private:
    T m_value{};
};
} // namespace Token
} // namespace BoxyBang