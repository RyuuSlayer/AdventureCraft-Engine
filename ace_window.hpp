#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>
namespace ace {

class AceWindow {
 public:
  AceWindow(int w, int h, std::string name);
  ~AceWindow();

  AceWindow(const AceWindow &) = delete;
  AceWindow &operator=(const AceWindow &) = delete;

  bool shouldClose() { return glfwWindowShouldClose(window); }

 private:
  void initWindow();

  const int width;
  const int height;

  std::string windowName;
  GLFWwindow *window;
};
}  // namespace ace