#include <BoxyBang/Token/TokenFactorySingleton.h>
#include <BoxyBang/Token/TokenStream.h>

void BoxyBang::Token::CTokenStream::CreateAndPush(
    std::string_view name)
{
    m_tokens.emplace_back(
        CTokenFactorySingleton::NewToken(name));
}