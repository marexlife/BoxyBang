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
    void Flush(
        BoxyBang::Token::CTokenStream& TokenStream);

    std::string SourceText;
    std::string LastWord;
};
} // namespace Lexer
} // namespace BoxyBang