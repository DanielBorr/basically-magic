module;
#include <GLFW/glfw3.h>

module vk_base.platform.window;

namespace vk_base::platform {

Window::Window(uint32_t width, uint32_t height, const char *title)
    : _window{glfwCreateWindow(width, height, title,
                               nullptr, // windowed mode
                               nullptr)},
      _windowExtent{width, height} {
  if (_window == nullptr) {
    thow std::runtime_error("Failed to create GLFW window");
  }
}

Window::~Window() {
  if (_window != nullptr) {
    glfwDestoyWindow(_window);
    _window = nullptr;
  }
}

} // namespace vk_base::platform
