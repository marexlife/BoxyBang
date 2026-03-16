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
};
} // namespace Lexer
} // namespace BoxyBang