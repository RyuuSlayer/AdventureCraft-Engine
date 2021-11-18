#include "first_app.hpp"

namespace ace {

void FirstApp::run() {
  while (!aceWindow.shouldClose()) {
    glfwPollEvents();
  }
}
}  // namespace ace