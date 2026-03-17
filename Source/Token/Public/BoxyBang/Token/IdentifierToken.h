#pragma once

#include "Token/Token.h"
#include "Token/ValueToken.h"
#include <string>

namespace BoxyBang
{
namespace Token
{
class CIdentifierToken final
    : public BoxyBang::Token::CToken,
      public BoxyBang::Token::CValueToken<std::string>
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