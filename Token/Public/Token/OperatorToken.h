#pragma once

#include "Token.h"

namespace BoxyBang
{
namespace Token
{
class Op : public Token
{
  public:
    Op& operator=(Op&&) = default;
    Op& operator=(const Op&) = default;
    Op(Op&&) = default;
    Op(const Op&) = default;
    ~Op() override;
};
} // namespace Token
} // namespace BoxyBang