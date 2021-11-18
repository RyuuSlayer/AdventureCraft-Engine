#pragma once

#include "ace_window.hpp"

namespace ace {
class FirstApp {
 public:
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

  void run();

 private:
  AceWindow aceWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
};
}  // namespace ace