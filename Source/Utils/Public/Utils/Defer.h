#pragma once

#include <tuple>
#include <utility>

namespace BoxyBang
{
namespace Utils
{
template <typename F, typename... Args>
class TDefer final
{
  public:
    explicit TDefer(F&& functor, Args&&... args)
        : m_functor(std::move(functor)),
          m_args(std::forward<args>(args)...)
    {
    }
    TDefer& operator=(const TDefer&) = default;
    TDefer& operator=(TDefer&&) = default;
    TDefer(const TDefer&) = default;
    TDefer(TDefer&&) = default;
    ~TDefer()
    {
        std::apply(m_functor, m_args);
    }

  private:
    F m_functor;
    std::tuple<Args...> m_args{};
};

template <typename F, typename... Args>
TDefer(F, Args...) -> TDefer<F, Args...>;
} // namespace Utils
} // namespace BoxyBang