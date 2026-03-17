#pragma once

#include "Token.h"

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] OperatorToken
    : public BoxyBang::Token::CToken
{
  public:
    explicit OperatorToken() noexcept = default;
};
} // namespace Token
} // namespace BoxyBang