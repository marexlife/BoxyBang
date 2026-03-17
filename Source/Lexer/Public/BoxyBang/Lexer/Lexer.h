#pragma once

#include "BoxyBang/Token/TokenStream.h"
#include <string>
#include <utility>

namespace BoxyBang
{
namespace Lexer
{
class [[nodiscard]] CLexer final
{
  public:
    explicit CLexer(std::string&& sourceText) noexcept
        : m_sourceText(std::move(sourceText))
    {
    }

    [[nodiscard]] Token::CTokenStream Run() noexcept;

  private:
    [[nodiscard]] Token::CTokenStream TryRun();
    void Flush(
        Token::CTokenStream& tokenStream) noexcept;
    void TryFlush(Token::CTokenStream& tokenStream);

    std::string m_sourceText;
    std::string m_lastWord;
};
} // namespace Lexer
} // namespace BoxyBang