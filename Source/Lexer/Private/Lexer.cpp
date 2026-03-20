#include <bits/std_thread.h>
#include <boxy_bang/lexer/Lexer.h>
#include <boxy_bang/token/TokenStream.h>

namespace boxy_bang
{
namespace lexer
{
token::TokenStream Lexer::Run()
{
    token::TokenStream token_stream;

    for (const auto currentChar : source_text_)
    {
        switch (currentChar)
        {
        case ' ':
            this->Flush(token_stream);
            break;
        default:
            last_word_.push_back(currentChar);
            break;
        }
    }

    this->Flush(token_stream);

    return token_stream;
}

void Lexer::Flush(token::TokenStream& TokenStream)
{
    TokenStream.CreateAndPush(last_word_);
    last_word_.clear();
}

} // namespace lexer
} // namespace boxy_bang