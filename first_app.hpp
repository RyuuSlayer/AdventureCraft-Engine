#pragma once

#include "ace_window.hpp"
#include "ace_pipeline.hpp"

namespace ace {
class FirstApp {
  public:
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

  void run();

 private:
  AceWindow aceWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
  AcePipeline acePipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
  
};
}  // namespace ace