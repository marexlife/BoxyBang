#pragma once

#include "Token/Token.h"
#include "Token/TokenStream.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace BoxyBang
{
namespace Lexer
{
class [[nodiscard]] Lexer final
{
  public:
    explicit Lexer(std::string&& sourceText)
        : m_sourceText(std::move(sourceText))
    {
    }

    [[nodiscard]] Token::TokenStream Run();

  private:
    void Flush(Token::TokenStream& tokenStream);

    std::string m_sourceText;
    std::string m_lastWord;
};
} // namespace Lexer
} // namespace BoxyBang