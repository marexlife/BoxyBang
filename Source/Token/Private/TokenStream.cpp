#include "Token/TokenStream.h"
#include "Token/TokenFactorySingleton.h"

void BoxyBang::Token::TokenStream::CreateAndPush(
    std::string_view name) noexcept
{
    m_tokens.emplace_back(
        TokenFactorySingleton::NewToken(name));
}