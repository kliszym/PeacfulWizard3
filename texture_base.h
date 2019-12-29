#ifndef PEACFUL_TEXTURE_BASE_H
#define PEACFUL_TEXTURE_BASE_H

#include <vector>

#include "block_material.h"
#include "static_textures.h"

#include "moves.h"
#include "moveable.h"
#include "moveable_textures.h"

class TextureBase {
public:
	std::vector<StaticTextures> materials;
	std::vector<MoveableTextures> moveables;

	TextureBase();
	void load(BlockMaterial material, BlockType type, std::string path);
	sf::Texture& get(BlockMaterial material, BlockType type);
	sf::Texture& get(Moveable object, Moves move);
};

#endif
