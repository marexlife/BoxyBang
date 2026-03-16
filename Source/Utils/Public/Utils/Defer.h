#pragma once

#include <type_traits>
#include <utility>

namespace BoxyBang
{
namespace Utils
{
template <typename F>
    requires std::is_default_constructible_v<F> &&
             std::is_move_constructible_v<F> &&
             std::is_function_v<F>
class TDefer final
{
  public:
    explicit TDefer(F&& functor)
        : m_functor(std::move(functor))
    {
    }
    TDefer& operator=(const TDefer&) = default;
    TDefer& operator=(TDefer&&) = default;
    TDefer(const TDefer&) = default;
    TDefer(TDefer&&) = default;
    ~TDefer()
    {
        m_functor();
    }

  private:
    F m_functor{};
};
} // namespace Utils
} // namespace BoxyBang