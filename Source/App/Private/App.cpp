#include "App.h"
#include <boxy_bang/lexer/Lexer.h>
#include <string_view>
#include <utility>

namespace boxy_bang
{
namespace app
{
void App::Run()
{
    constexpr std::string_view kSourceText("");

    const auto result =
        lexer::Lexer(std::move(kSourceText)).Run();
}

} // namespace app
} // namespace boxy_bang