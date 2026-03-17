#include "BoxyBang/Token/TokenStream.h"
#include "BoxyBang/Token/TokenFactorySingleton.h"

void BoxyBang::Token::CTokenStream::CreateAndPush(
    std::string_view name)
{
    m_tokens.emplace_back(
        CTokenFactorySingleton::NewToken(name));
}