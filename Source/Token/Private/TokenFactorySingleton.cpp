#include "BoxyBang/Token/TokenFactorySingleton.h"
#include "BoxyBang/Token/IdentifierToken.h"
#include "BoxyBang/Token/Token.h"
#include <memory>
#include <string>

namespace BoxyBang
{
namespace Token
{
std::unique_ptr<Token::CToken> Token::
    CTokenFactorySingleton::NewToken(
        const std::string_view name) noexcept
{
    // const std::optional<std::int32_t> i =
    // std::nullopt; std::from_chars(name.cbegin(),
    // name.cend(), i);

    return std::make_unique<Token::CIdentifierToken>(
        std::string(name));
}
} // namespace Token
} // namespace BoxyBang