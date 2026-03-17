#include "Token/TokenFactorySingleton.h"
#include "Token/IdentifierToken.h"
#include "Token/Token.h"
#include <memory>
#include <string>

std::unique_ptr<BoxyBang::Token::CToken> BoxyBang::
    Token::CTokenFactorySingleton::NewToken(
        const std::string_view name) noexcept
{
    // const std::optional<std::int32_t> i =
    // std::nullopt; std::from_chars(name.cbegin(),
    // name.cend(), i);

    return std::make_unique<
        BoxyBang::Token::CIdentifierToken>(
        std::string(name));
}