#pragma once

#include <BoxyBang/Token/TokenStream.h>
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
        : SourceText(std::move(sourceText))
    {
    }

    [[nodiscard]] Token::CTokenStream Run() noexcept;

  private:
    [[nodiscard]] Token::CTokenStream TryRun();
    void Flush(
        Token::CTokenStream& tokenStream) noexcept;
    void TryFlush(Token::CTokenStream& tokenStream);

    std::string SourceText;
    std::string LastWord;
};
} // namespace Lexer
} // namespace BoxyBang