#pragma once

#include <string_view>

namespace BoxyBang
{
namespace App
{
class TestCaseMachineSingleton final
{
  public:
    [[nodiscard]] static consteval std::string_view
    GetTestCode() noexcept
    {
        return R"(

function main(): void {
    console.log('Hello World!')
}

main()
)";
    }
};
} // namespace App
} // namespace BoxyBang