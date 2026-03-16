#pragma once

#include "Token.h"
#include <memory>
#include <string_view>
#include <vector>

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] TokenStream final
{
  public:
    void CreateAndPush(std::string_view name);

  private:
    std::vector<std::unique_ptr<Token>> m_tokens;
};
} // namespace Token
} // namespace BoxyBang