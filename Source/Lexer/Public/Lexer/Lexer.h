#pragma once

#include <string>
namespace BoxyBang
{
namespace Lexer
{
class Lexer final
{
  public:
    explicit Lexer() = default;

    void Run(std::string&& sourceText);
};
} // namespace Lexer
} // namespace BoxyBang