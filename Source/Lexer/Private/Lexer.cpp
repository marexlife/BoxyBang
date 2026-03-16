#include "Lexer/Lexer.h"
#include "Token/TokenStream.h"
#include "Utils/Defer.h"
#include <string>

namespace BoxyBang
{
namespace Lexer
{
Token::TokenStream Lexer::Run()
{
    Token::TokenStream tokenStream;

    Utils::TDefer flushAtEnd(
        [](BoxyBang::Lexer::Lexer* const self,
           Token::TokenStream& tokenStream) -> void {
            self->Flush(tokenStream);
        },
        this, &tokenStream);

    for (const auto currentChar : m_sourceText)
    {
        switch (currentChar)
        {
        case ' ':
            this->Flush(tokenStream);
            break;
        default:
            m_lastWord.push_back(currentChar);
            break;
        }
    }

    return tokenStream;
}

void Lexer::Lexer::Flush(
    Token::TokenStream& tokenStream)
{
    tokenStream.CreateAndPush(m_lastWord);
    m_lastWord.clear();
}
} // namespace Lexer
} // namespace BoxyBang