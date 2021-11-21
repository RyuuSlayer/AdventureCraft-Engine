#pragma once

#include "ace_device.hpp"
#include "ace_pipeline.hpp"
#include "ace_window.hpp"

namespace ace {
class FirstApp {
 public:
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

  void run();

 private:
  AceWindow aceWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
  AceDevice aceDevice{aceWindow};
  AcePipeline acePipeline{
      aceDevice,
      "shaders/simple_shader.vert.spv",
      "shaders/simple_shader.frag.spv",
      AcePipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT)};
};
}  // namespace ace