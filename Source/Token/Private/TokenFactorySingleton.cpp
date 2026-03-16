#include "Token/TokenFactorySingleton.h"
#include "Token/IdentifierToken.h"
#include "Token/OperatorToken.h"
#include "Token/Token.h"
#include <cstdint>
#include <memory>
#include <optional>

std::unique_ptr<BoxyBang::Token::Token> BoxyBang::
    Token::TokenFactorySingleton::NewToken(
        std::string_view name)
{
    std::optional<std::int32_t> i = std::nullopt;
    // std::from_chars(name.cbegin(), name.cend(), i);

    return std::make_unique<
        BoxyBang::Token::IdentifierToken>();
}