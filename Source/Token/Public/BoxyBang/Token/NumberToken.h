#pragma once

#include <BoxyBang/Token/ValueToken/ValueToken.h>
#include <cmath>

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] CNumberToken final
    : public Token::CValueToken<std::double_t>
{
  public:
    explicit CNumberToken(std::double_t value) noexcept
        : CValueToken(std::move(value))
    {
    }
};
} // namespace Token
} // namespace BoxyBang