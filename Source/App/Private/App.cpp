#include "App.h"
#include <BoxyBang/Lexer/Lexer.h>
#include <string>
#include <utility>

namespace BoxyBang
{
namespace App
{
void CApp::Run()
{
    std::string SourceText("");

    const auto Result =
        BoxyBang::Lexer::CLexer(std::move(SourceText))
            .Run();
}

} // namespace App
} // namespace BoxyBang