#pragma once

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] Token
{
  public:
    explicit Token() = default;
    Token& operator=(Token&&) = default;
    Token& operator=(const Token&) = default;
    Token(Token&&) = default;
    Token(const Token&) = default;
    virtual ~Token() = default;
};
} // namespace Token
} // namespace BoxyBang