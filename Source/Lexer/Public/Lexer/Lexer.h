#pragma once

#include <string>
namespace BoxyBang
{
namespace Lexer
{
class [[nodiscard]] Lexer final
{
  public:
    explicit Lexer() = default;

    void Run(std::string&& sourceText);
};
} // namespace Lexer
} // namespace BoxyBang