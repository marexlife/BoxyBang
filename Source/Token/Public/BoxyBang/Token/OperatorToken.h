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
    explicit COperatorToken() noexcept = default;
};
} // namespace Token
} // namespace BoxyBang