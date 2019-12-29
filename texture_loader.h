#ifndef PEACFUL_TEXTURE_LOADER_H
#define PEACFUL_TEXTURE_LOADER_H

#include "texture_base.h"

class TextureLoader {
public:
	TextureBase& texture_base;

	TextureLoader(TextureBase& textures);
	void load();
};

#endif 