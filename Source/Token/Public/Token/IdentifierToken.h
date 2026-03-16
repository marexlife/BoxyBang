#pragma once

namespace BoxyBang
{
namespace Token
{
class IdentifierToken
{
  public:
    explicit IdentifierToken() = default;
    IdentifierToken& operator=(
        const IdentifierToken&) = default;
    IdentifierToken& operator=(IdentifierToken&&) =
        default;
    IdentifierToken(const IdentifierToken&) = default;
    IdentifierToken(IdentifierToken&&) = default;
    virtual ~IdentifierToken() = default;
};
} // namespace Token
} // namespace BoxyBang