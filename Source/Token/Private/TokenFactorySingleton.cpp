#include "Token/TokenFactorySingleton.h"
#include "Token/Token.h"
#include <charconv>
#include <cstdint>
#include <optional>

std::unique_ptr<BoxyBang::Token::Token> BoxyBang::
    Token::TokenFactorySingleton::NewToken(
        std::string_view name)
{
    std::optional<std::int32_t> i = std::nullopt;
    std::from_chars(name.cbegin(), name.cend(), i);
}