#pragma once

#include "Token.h"
#include <memory>
#include <string_view>

namespace BoxyBang
{
namespace Token
{
class CTokenFactorySingleton final
{
  public:
    [[nodiscard]] static std::unique_ptr<
        BoxyBang::Token::CToken>
    NewToken(std::string_view Name);
};
} // namespace Token
} // namespace BoxyBang