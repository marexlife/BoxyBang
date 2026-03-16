#include "Token/TokenStream.h"

void BoxyBang::Token::TokenStream::CreateAndPush(std::string_view name)
{
    m_tokens.emplace_back(TokenFactorySingleton::NewToken(name));
}