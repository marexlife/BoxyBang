#pragma once

#include "Token.h"
#include "TokenFactorySingleton.h"
#include <memory>
#include <string_view>
#include <vector>

namespace BoxyBang
{
namespace Token
{
class TokenStream final
{
  public:
    void CreateAndPush(std::string_view name)
    {
        m_tokens.emplace_back(TokenFactorySingleton::NewToken(name));
    }

  private:
    std::vector<std::unique_ptr<Token>> m_tokens;
};
} // namespace Token
} // namespace BoxyBang