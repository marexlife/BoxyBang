#include "App.h"
#include "Lexer/Lexer.h"
#include <string>

namespace BoxyBang
{
namespace App
{
void App::Run()
{
    const auto result =
        Lexer::Lexer().Run(std::string(""));
}
} // namespace App
} // namespace BoxyBang