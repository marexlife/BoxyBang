#pragma once

#include "Token/Token.h"

namespace BoxyBang
{
namespace Token
{
class IdentifierToken final
    : public BoxyBang::Token::Token
{
  public:
    explicit IdentifierToken() = default;
};
} // namespace Token
} // namespace BoxyBang