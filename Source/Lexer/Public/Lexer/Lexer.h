#pragma once

#include "Token/Token.h"
#include "Token/TokenStream.h"
#include <memory>
#include <string>
#include <vector>

namespace BoxyBang
{
namespace Lexer
{
class [[nodiscard]] Lexer final
{
  public:
    explicit Lexer() = default;

    [[nodiscard]] Token::TokenStream Run(
        std::string&& sourceText);

  private:
    void Flush(Token::TokenStream& tokenStream);

    std::string m_lastWord;
};
} // namespace Lexer
} // namespace BoxyBang