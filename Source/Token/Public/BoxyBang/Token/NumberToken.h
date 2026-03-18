#pragma once

#include <BoxyBang/Token/ValueToken/ValueToken.h>
#include <cmath>

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] CNumberToken final
    : public BoxyBang::Token::CValueToken<
          std::double_t>
{
  public:
    explicit CNumberToken(std::double_t value)
        : CValueToken(std::move(value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang