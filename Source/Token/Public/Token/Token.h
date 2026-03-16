#pragma once

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] Token
{
  public:
    explicit Token() noexcept = default;
    Token& operator=(Token&&) noexcept = delete;
    Token& operator=(const Token&) noexcept = delete;
    Token(Token&&) noexcept = delete;
    Token(const Token&) noexcept = delete;
    virtual ~Token() noexcept = default;
};
} // namespace Token
} // namespace BoxyBang