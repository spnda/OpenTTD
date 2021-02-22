#include "sdl2_v.h"

class VideoDriver_SDL_Vulkan : public VideoDriver_SDL_Base {
public:
    VideoDriver_SDL_Vulkan() {}

    const char* Start(const StringList &param) override;

	void Stop() override;

    const char* GetName() const override { return "sdl-vulkan"; }
    
protected:
	bool AllocateBackingStore(int w, int h, bool force = false) override;
	void *GetVideoPointer() override;
	void ReleaseVideoPointer() override;
};

class FVideoDriver_SDL_Vulkan : public DriverFactoryBase {
    FVideoDriver_SDL_Vulkan() : DriverFactoryBase(Driver::DT_VIDEO, 10, "sdl-vulkan", "SDL Vulkan Driver") {}
    Driver *CreateInstance() const override { return new VideoDriver_SDL_Vulkan(); }
};
