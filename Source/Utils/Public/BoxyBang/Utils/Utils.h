#pragma once

namespace boxy_bang {
namespace utils {
class Utils final {
 public:
  explicit Utils() = default;
  ~Utils() = default;

  Utils& operator=(const Utils&) = delete;
  Utils& operator=(Utils&&) = delete;
  Utils(const Utils&) = delete;
  Utils(Utils&&) = delete;
};
}  // namespace utils
}  // namespace boxy_bang