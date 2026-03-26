#pragma once

#include "BoxyBang/Token/Token.h"

namespace BoxyBang
{
namespace Token
{
class Ident : public BoxyBang::Token::Token
{
  public:
    explicit Ident() : Token()
    {
    }
    ~Ident() override = default;

    Ident& operator=(const Ident&) = delete;
    Ident& operator=(Ident&&) = delete;
    Ident(const Ident&) = delete;
    Ident(Ident&&) = delete;
};
} // namespace Token
} // namespace BoxyBang