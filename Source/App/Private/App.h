#pragma once

#include <string_view>
namespace BoxyBang
{
namespace App
{
class [[nodiscard]] App final
{
  public:
    App() = default;

    void Run();

    [[nodiscard]] static std::string_view GetTestCode()
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