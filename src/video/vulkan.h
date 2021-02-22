#pragma once

#include "../core/alloc_type.hpp"
#include "../spriteloader/spriteloader.hpp"

#include <vulkan/vulkan.h>

class VulkanBackend : public ZeroedMemoryAllocator, SpriteEncoder {
private:
    static VulkanBackend* instance;

public:
    static inline VulkanBackend* Get() {
        return VulkanBackend::instance;
    }

    const char* Create();
};
