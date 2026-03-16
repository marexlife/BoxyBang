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
    explicit ValueToken(T&& value) noexcept(
        std::is_nothrow_constructible_v<T>)
        : m_value(std::move(value))
    {
    }

    ValueToken& operator=(const ValueToken&) noexcept(
        std::is_nothrow_copy_assignable_v<T>) = delete;

    ValueToken& operator=(ValueToken&&) noexcept(
        std::is_nothrow_move_assignable_v<T>) = delete;

    ValueToken(const ValueToken&) noexcept(
        std::is_nothrow_copy_constructible_v<T>) =
        delete;

    ValueToken(ValueToken&&) noexcept(
        std::is_nothrow_move_constructible_v<T>) =
        delete;

    virtual ~ValueToken() noexcept(
        std::is_nothrow_destructible_v<T>) = default;

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