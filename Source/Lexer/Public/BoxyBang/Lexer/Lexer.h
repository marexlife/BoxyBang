#pragma once

#include <BoxyBang/Token/TokenStream.h>
#include <string>
#include <utility>

namespace BoxyBang
{
namespace Lexer
{
class [[nodiscard]] CLexer final
{
  public:
    explicit CLexer(std::string&& sourceText)
        : SourceText(std::move(sourceText))
    {
    }

    [[nodiscard]] Token::CTokenStream Run();

  private:
    [[nodiscard]] Token::CTokenStream TryRun();
    void Flush(Token::CTokenStream& tokenStream);
    void TryFlush(Token::CTokenStream& tokenStream);

    std::string SourceText;
    std::string LastWord;
};
} // namespace Lexer
} // namespace BoxyBang