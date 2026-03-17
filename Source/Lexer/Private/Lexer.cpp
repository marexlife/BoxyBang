#include "Lexer/Lexer.h"
#include "Token/TokenStream.h"
#include "Utils/Defer.h"
#include <bits/std_thread.h>
#include <exception>
#include <iostream>
#include <string>

namespace BoxyBang
{
namespace Lexer
{
Token::CTokenStream CLexer::Run() noexcept
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

Token::CTokenStream CLexer::TryRun()
{
    Token::CTokenStream tokenStream;

    Utils::TDefer flushAtEnd(
        [](BoxyBang::Lexer::CLexer* const self,
           Token::CTokenStream& tokenStream) -> void {
            self->TryFlush(tokenStream);
        },
        this, &tokenStream);

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

    return tokenStream;
}
void CLexer::Flush(
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

void CLexer::TryFlush(Token::CTokenStream& tokenStream)
{
    tokenStream.CreateAndPush(m_lastWord);
    m_lastWord.clear();
}
} // namespace Lexer
} // namespace BoxyBang