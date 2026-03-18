#pragma once

#include <BoxyBang/Token/ValueToken/ValueToken.h>
#include <string>

namespace BoxyBang
{
namespace Token
{
class CIdentifierToken final
    : public BoxyBang::Token::CValueToken<std::string>
{
  public:
    explicit CIdentifierToken(
        std::string&& Value) noexcept
        : CValueToken(std::move(Value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang