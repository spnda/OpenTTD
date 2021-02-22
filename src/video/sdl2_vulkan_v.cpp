#include "vulkan.h"
#include "sdl2_vulkan_v.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>

const char* VideoDriver_SDL_Vulkan::Start(const StringList &param) {
    const char* error = VideoDriver_SDL_Base::Start(param);
    if (error != nullptr) return error;

    error = VulkanBackend::Get()->Create();

    return nullptr;
}

void VideoDriver_SDL_Vulkan::Stop() {
    this->VideoDriver_SDL_Base::Stop();
}
