#include <BoxyBang/Token/TokenFactorySingleton.h>
#include <BoxyBang/Token/TokenStream.h>

void BoxyBang::Token::CTokenStream::CreateAndPush(
    std::string_view name)
{
    Tokens.emplace_back(
        CTokenFactorySingleton::NewToken(name));
}