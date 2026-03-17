#pragma once

#include "Token.h"
#include <memory>
#include <string_view>
#include <vector>

namespace BoxyBang
{
namespace Token
{
class [[nodiscard]] CTokenStream final
{
  public:
    void CreateAndPush(std::string_view name);

  private:
    std::vector<
        std::unique_ptr<BoxyBang::Token::CToken>>
        m_tokens;
};
} // namespace Token
} // namespace BoxyBang