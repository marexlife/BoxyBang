#include <BoxyBang/Lexer/Lexer.h>
#include <BoxyBang/Token/TokenStream.h>
#include <bits/std_thread.h>

namespace BoxyBang
{
namespace Lexer
{
Token::CTokenStream CLexer::Run()
{
    Token::CTokenStream tokenStream;

    for (const auto currentChar : SourceText)
    {
        switch (currentChar)
        {
        case ' ':
            this->Flush(tokenStream);
            break;
        default:
            LastWord.push_back(currentChar);
            break;
        }
    }

    this->Flush(tokenStream);

    return tokenStream;
}

void CLexer::Flush(
    BoxyBang::Token::CTokenStream& TokenStream)
{
    TokenStream.CreateAndPush(LastWord);
    LastWord.clear();
}

} // namespace Lexer
} // namespace BoxyBang