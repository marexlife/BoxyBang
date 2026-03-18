#pragma once

#include "Token.h"

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] COperatorToken
    : public Token::CToken
{
  public:
    explicit COperatorToken() = default;
};
} // namespace Token
} // namespace BoxyBang