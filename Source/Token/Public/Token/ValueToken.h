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
    explicit ValueToken(T&& value) noexcept
        : m_value(std::move(value))
    {
    }

    ValueToken& operator=(const ValueToken&) noexcept =
        delete;
    ValueToken& operator=(ValueToken&&) noexcept =
        delete;
    ValueToken(const ValueToken&) noexcept = delete;
    ValueToken(ValueToken&&) noexcept = delete;
    virtual ~ValueToken() noexcept = default;

  protected:
    [[nodiscard]] inline const T& GetValue()
        const noexcept
    {
        return m_value;
    }

  private:
    T m_value{};
};
} // namespace Token
} // namespace BoxyBang