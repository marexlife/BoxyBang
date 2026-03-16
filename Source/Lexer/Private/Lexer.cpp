#include "Lexer/Lexer.h"
#include <string>

void BoxyBang::Lexer::Lexer::Run(std::string&& sourceText)
{
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
}