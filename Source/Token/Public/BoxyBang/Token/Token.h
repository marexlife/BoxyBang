#pragma once

namespace BoxyBang
{
namespace Token
{
class Token
{
  public:
    explicit Token() = default;
    virtual ~Token() = default;

    Token& operator=(const Token&) = delete;
    Token& operator=(Token&&) = delete;
    Token(const Token&) = delete;
    Token(Token&&) = delete;
};
} // namespace Token
} // namespace BoxyBang