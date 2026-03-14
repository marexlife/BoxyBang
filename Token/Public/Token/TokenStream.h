#pragma once

#include "Token.h"
#include <memory>
#include <vector>

namespace BoxyBang
{
namespace Token
{
class TokenStream final
{
  public:
    void CreateAndPush()
    {
        // m_tokens.emplace_back();
    }
    
  private:
    std::vector<std::unique_ptr<Token>> m_tokens;
};
} // namespace Token
} // namespace BoxyBang