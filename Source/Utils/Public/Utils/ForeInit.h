#pragma once

#include <type_traits>
#include <utility>

namespace BoxyBang
{
namespace Utils
{
template <typename T> class ForceInit final : public T
{
  public:
    template <typename... Args>
        requires std::is_constructible_v<T, Args...>
    explicit ForceInit(Args... args)
        : T(std::forward<Args>(args)...)
    {
    }

    ForceInit& operator=(const ForceInit&) = delete;
    ForceInit& operator=(ForceInit&&) = delete;
    ForceInit(const ForceInit&) = delete;
    ForceInit(ForceInit&&) = delete;
    virtual ~ForceInit() = default;
};
} // namespace Utils
} // namespace BoxyBang