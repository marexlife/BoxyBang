#pragma once

#include "Token.h"
#include <memory>
#include <string_view>

namespace BoxyBang
{
namespace Token
{
class TokenFactorySingleton final
{
  public:
    [[nodiscard]] static std::unique_ptr<
        BoxyBang::Token::Token>
    NewToken(std::string_view name);
};
} // namespace Token
} // namespace BoxyBang