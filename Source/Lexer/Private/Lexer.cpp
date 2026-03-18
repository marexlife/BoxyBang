#include <BoxyBang/Lexer/Lexer.h>
#include <BoxyBang/Token/TokenStream.h>
#include <bits/std_thread.h>
#include <exception>
#include <iostream>
#include <string>

namespace BoxyBang
{
namespace Lexer
{
Token::CTokenStream Lexer::Run() noexcept
{
    while (true)
    {
        try
        {
            return this->TryRun();
        }
        catch (std::exception& e)
        {
            std::operator<<(
                std::operator<<(
                    std::operator<<(
                        std::cout,
                        "Lexer failed with error "),
                    e.what()),
                ". Trying Again.");
        }
    }
}

Token::CTokenStream Lexer::TryRun()
{
    Token::CTokenStream tokenStream;

    for (const auto currentChar : m_sourceText)
    {
        switch (currentChar)
        {
        case ' ':
            this->TryFlush(tokenStream);
            break;
        default:
            m_lastWord.push_back(currentChar);
            break;
        }
    }

    this->TryFlush(tokenStream);

    return tokenStream;
}
void Lexer::Flush(
    Token::CTokenStream& tokenStream) noexcept
{
    while (true)
    {
        try
        {
            this->TryFlush(tokenStream);
        }
        catch (const std::exception& e)
        {
            std::operator<<(
                std::operator<<(
                    std::operator<<(
                        std::cout,
                        "Lexer Flush Failed with "
                        "error "),
                    e.what()),
                ". Trying Again.");
        }
    }
}

void Lexer::TryFlush(Token::CTokenStream& tokenStream)
{
    tokenStream.CreateAndPush(m_lastWord);
    m_lastWord.clear();
}
} // namespace Lexer
} // namespace BoxyBang