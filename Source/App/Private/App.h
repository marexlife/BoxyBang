#pragma once

#include <string_view>

namespace BoxyBang
{
namespace App
{
class [[nodiscard]] CApp final
{
  public:
    CApp() noexcept = default;

    void Run() noexcept;

    void TryRun();
};
} // namespace App
} // namespace BoxyBang