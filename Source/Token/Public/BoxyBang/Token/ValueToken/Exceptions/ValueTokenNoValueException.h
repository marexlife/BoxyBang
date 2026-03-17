#pragma once

#include <exception>

namespace BoxyBang
{
namespace Token
{
class CValueTokenNoValueException final
    : public std::exception
{
  public:
    explicit CValueTokenNoValueException() = default;
    ~CValueTokenNoValueException() override = default;

    const char* what() const noexcept override
    {
        return "TokenValue in CValueToken left empty. "
               "Possibly CValueToken has default "
               "Constructor which it shouldn't have.";
    }

    CValueTokenNoValueException& operator=(
        const CValueTokenNoValueException&) = delete;
    CValueTokenNoValueException& operator=(
        CValueTokenNoValueException&&) = delete;
    CValueTokenNoValueException(
        const CValueTokenNoValueException&) = delete;
    CValueTokenNoValueException(
        CValueTokenNoValueException&&) = delete;
};
} // namespace Token
} // namespace BoxyBang