#pragma once

#include "OperatorToken.h"
#include "Token/ValueToken.h"
#include <cmath>

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] NumberToken final
    : public BoxyBang::Token::OperatorToken,
      public BoxyBang::Token::ValueToken<std::double_t>
{
  public:
    explicit NumberToken(std::double_t value) noexcept
        : ValueToken(std::move(value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang