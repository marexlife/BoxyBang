#pragma once

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] CToken
{
  public:
    explicit CToken() = default;
    virtual ~CToken() = default;

    CToken& operator=(CToken&&) = delete;
    CToken& operator=(const CToken&) = delete;
    CToken(CToken&&) = delete;
    CToken(const CToken&) = delete;
};
} // namespace Token
} // namespace BoxyBang