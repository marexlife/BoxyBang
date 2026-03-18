#include <BoxyBang/Token/IdentifierToken.h>
#include <BoxyBang/Token/Token.h>
#include <BoxyBang/Token/TokenFactorySingleton.h>
#include <memory>
#include <string>

namespace BoxyBang
{
namespace Token
{
std::unique_ptr<BoxyBang::Token::CToken> Token::
    CTokenFactorySingleton::NewToken(
        const std::string_view Name)
{
    return std::make_unique<Token::CIdentifierToken>(
        std::string(Name));
}
} // namespace Token
} // namespace BoxyBang