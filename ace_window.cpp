#include "ace_window.hpp"

namespace ace {

AceWindow::AceWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
  initWindow();
}

AceWindow::~AceWindow() {
  glfwDestroyWindow(window);
  glfwTerminate();
}

void AceWindow::initWindow() {
  glfwInit();
  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

  window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}
}  // namespace ace