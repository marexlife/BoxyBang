#include "Lexer/Lexer.h"
#include "Token/Token.h"
#include "Token/TokenStream.h"
#include <memory>
#include <string>
#include <vector>

namespace BoxyBang
{
Token::TokenStream Lexer::Lexer::Run(
    std::string&& sourceText)
{
    Token::TokenStream tokenStream;
    for (const auto currentChar : sourceText)
    {
        switch (currentChar)
        {
        case ' ':
            break;
        default:
            break;
        }
    }

    return tokenStream;
}
} // namespace BoxyBang