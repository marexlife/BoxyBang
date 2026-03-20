#include <boxy_bang/token/TokenFactorySingleton.h>
#include <boxy_bang/token/TokenStream.h>

namespace boxy_bang
{
namespace token
{
void TokenStream::CreateAndPush(std::string_view name)
{
    tokens_.emplace_back(
        TokenFactorySingleton::NewToken(name));
}

} // namespace token
} // namespace boxy_bang