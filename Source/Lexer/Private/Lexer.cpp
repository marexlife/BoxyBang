#include "Lexer/Lexer.h"
#include "Token/TokenStream.h"
#include <string>

namespace BoxyBang
{
Token::TokenStream Lexer::Lexer::Run()
{
    Token::TokenStream tokenStream;

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

    this->Flush(tokenStream);

    return tokenStream;
}

void Lexer::Lexer::Flush(
    Token::TokenStream& tokenStream)
{
    tokenStream.CreateAndPush(m_lastWord);
    m_lastWord.clear();
}
} // namespace BoxyBang