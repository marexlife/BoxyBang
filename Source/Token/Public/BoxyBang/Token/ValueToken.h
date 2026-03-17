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
class CValueToken
{
  public:
    explicit CValueToken(T&& value) noexcept(
        std::is_nothrow_constructible_v<T>)
        : m_value(std::move(value))
    {
    }

    CValueToken&
    operator=(const CValueToken&) noexcept(
        std::is_nothrow_copy_assignable_v<T>) = delete;

    CValueToken& operator=(CValueToken&&) noexcept(
        std::is_nothrow_move_assignable_v<T>) = delete;

    CValueToken(const CValueToken&) noexcept(
        std::is_nothrow_copy_constructible_v<T>) =
        delete;

    CValueToken(CValueToken&&) noexcept(
        std::is_nothrow_move_constructible_v<T>) =
        delete;

    virtual ~CValueToken() noexcept(
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