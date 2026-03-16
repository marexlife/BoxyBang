#include "App.h"
#include "Lexer/Lexer.h"
#include <iostream>
#include <string>
#include <utility>

namespace BoxyBang
{
namespace App
{
void App::Run()
{
    std::string sourceText(App::GetTestCode());

    std::operator<<(
        std::operator<<(std::cout, "sourceText:"),
        sourceText);

    const auto result =
        Lexer::Lexer(std::move(sourceText)).Run();
}
} // namespace App
} // namespace BoxyBang