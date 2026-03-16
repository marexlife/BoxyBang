#pragma once

#include "Token/Token.h"
#include "Token/ValueToken.h"
#include <string>

namespace BoxyBang
{
namespace Token
{
class IdentifierToken final
    : public BoxyBang::Token::Token,
      public BoxyBang::Token::ValueToken<std::string>
{
  public:
    explicit IdentifierToken(std::string&& value)
        : ValueToken(std::move(value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang