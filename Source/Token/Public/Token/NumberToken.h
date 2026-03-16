#pragma once

#include "OperatorToken.h"
#include "Token/ValueToken.h"

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] NumberToken final
    : public BoxyBang::Token::OperatorToken,
      public BoxyBang::Token::ValueToken<double>
{
  public:
    explicit NumberToken(double value)
        : ValueToken(std::move(value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang