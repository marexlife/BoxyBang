#pragma once

#include <BoxyBang/Token/ValueToken/ValueToken.h>
#include <string>

namespace BoxyBang
{
namespace Token
{
class CIdentifierToken final
    : public Token::CValueToken<std::string>
{
  public:
    explicit CIdentifierToken(
        std::string&& value) noexcept
        : CValueToken(std::move(value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang