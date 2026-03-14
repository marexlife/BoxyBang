#pragma once

namespace BoxyBang
{
namespace Token
{
class Token
{
  public:
    Token& operator=(Token&&) = default;
    Token& operator=(const Token&) = default;
    Token(Token&&) = default;
    Token(const Token&) = default;
    virtual ~Token() = default;
};
} // namespace Token
} // namespace BoxyBang