#ifndef PEACFUL_MAP_FRAGMENT_H
#define PEACFUL_MAP_FRAGMENT_H

#include <SFML/Graphics.hpp>

#include "texture_base.h"
#include "block_material.h"
#include "block_type.h"

class MapFragment {
public:
	BlockMaterial material;
	BlockType type;
	sf::Sprite sprite;

	MapFragment() :
		material(BlockMaterial::NONE), type(BlockType::NONE) {}
	MapFragment(TextureBase& data_base, BlockMaterial block_material, BlockType block_type) :
		sprite(data_base.get(block_material, block_type)), material(block_material), type(block_type){}
};


#endif
