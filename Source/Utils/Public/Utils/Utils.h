#pragma once
        
namespace BoxyBang
{
namespace Utils
{
class Utils 
{
  public:
    explicit Utils() = default;
    Utils& operator=(const Utils&) = default;
    Utils& operator=(Utils&&) = default;
    Utils(const Utils&) = default;
    Utils(Utils&&) = default;
    virtual ~Utils() = default;
};
} // namespace Utils
} // namespace BoxyBang