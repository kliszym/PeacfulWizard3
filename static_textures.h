#ifndef PEACFUL_STATIC_TEXTURES_H
#define PEACFUL_STATIC_TEXTURES_H

#include <vector>
#include <SFML/Graphics.hpp>

#include "block_type.h"

class StaticTextures {
public:
	std::vector<sf::Texture> textures;

	StaticTextures() {
		textures.resize((int)BlockType::NONE);
	}
};

#endif