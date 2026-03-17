#pragma once

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] CToken
{
  public:
    explicit CToken() noexcept = default;
    CToken& operator=(CToken&&) noexcept = delete;
    CToken& operator=(const CToken&) noexcept = delete;
    CToken(CToken&&) noexcept = delete;
    CToken(const CToken&) noexcept = delete;
    virtual ~CToken() noexcept = default;
};
} // namespace Token
} // namespace BoxyBang