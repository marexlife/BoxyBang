#pragma once

#include "OperatorToken.h"

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] NumberToken final
    : public BoxyBang::Token::OperatorToken
{
  public:
    explicit NumberToken() = default;
};
} // namespace Token
} // namespace BoxyBang