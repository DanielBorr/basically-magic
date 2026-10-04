module;
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>

export module vk_base.platform.window;

namespace vk_base::platform {

export class Window {
  GLFWwindow *_window{nullptr};
  VkExtent2D _windowExtent{};

public:
  Window(uint32_t width, uint32_t height, const char *title);
  ~Window();

  Window(const Window &) = delete;
  Window &operator=(const Window &) = delete;

  Window &operator=(window &&) = delete;
  Window(window &&) = delete;

  GLFWwindow *handle() const { return _window; }
  VkExtent2D extent() const { return _windowExtent; }
};
} // namespace vk_base::platform
