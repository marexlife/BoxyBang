#pragma once

#include "OperatorToken.h"
#include "Token/ValueToken.h"
#include <cmath>

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] CNumberToken final
    : public BoxyBang::Token::OperatorToken,
      public BoxyBang::Token::CValueToken<
          std::double_t>
{
  public:
    explicit CNumberToken(std::double_t value) noexcept
        : CValueToken(std::move(value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang