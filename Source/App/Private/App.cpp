#include "App.h"
#include <BoxyBang/Lexer/Lexer.h>
#include <string>
#include <utility>

namespace BoxyBang
{
namespace App
{
void App::Run()
{
    std::string sourceText("");

    const auto result =
        Lexer::Lexer(std::move(sourceText)).Run();
}

} // namespace App
} // namespace BoxyBang