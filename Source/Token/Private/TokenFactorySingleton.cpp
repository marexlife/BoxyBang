#include <boxy_bang/token/IdentifierToken.h>
#include <boxy_bang/token/Token.h>
#include <boxy_bang/token/TokenFactorySingleton.h>
#include <memory>
#include <string>

namespace boxy_bang
{
namespace token
{
std::unique_ptr<Token> TokenFactorySingleton::NewToken(
    const std::string_view Name)
{
    return std::make_unique<IdentifierToken>(
        std::string(Name));
}
} // namespace token
} // namespace boxy_bang