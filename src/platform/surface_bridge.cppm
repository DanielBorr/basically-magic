module;
#include <Vulkan/vulkan.h>

export module vk_base.platform.surface_bridge;

class SurfaceBridge {
public:
  SurfaceBridge(VkInstance instance, const Window &window);
  ~SurfaceBridge();

  SurfaceBridge(const SurfaceBridge &) = delete;
  SurfaceBridge &operator=(const SurfaceBridge &) = delete;

  VkSurfaceKHR handle() const noexcept { return _surface; }

  static std::vector<const char *> required_instance_extensions();

private:
  VkInstance _instance{VK_NULL_HANDLE};
  VkSurfaceKHR _surface{VK_NULL_HANDLE};
};
