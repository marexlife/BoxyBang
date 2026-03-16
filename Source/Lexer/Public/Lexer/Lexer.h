#pragma once

#include "Token/TokenStream.h"
#include <string>
#include <utility>

namespace BoxyBang
{
namespace Lexer
{
class [[nodiscard]] Lexer final
{
  public:
    explicit Lexer(std::string&& sourceText) noexcept
        : m_sourceText(std::move(sourceText))
    {
    }

    [[nodiscard]] Token::TokenStream Run() noexcept;

  private:
    void Flush(
        Token::TokenStream& tokenStream) noexcept;

    std::string m_sourceText;
    std::string m_lastWord;
};
} // namespace Lexer
} // namespace BoxyBang