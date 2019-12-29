#include "texture_base.h"

TextureBase::TextureBase() {
	materials.resize((int)BlockMaterial::NONE);
}

void TextureBase::load(BlockMaterial material, BlockType type, std::string path) {
	if (!materials[(int)material].textures[(int)type].loadFromFile(path)) {
		throw std::runtime_error("Can't find texture at" + path + ".");
	}
}

sf::Texture& TextureBase::get(BlockMaterial material, BlockType type) {
	return materials[(int)material].textures[(int)type];
}

sf::Texture& TextureBase::get(Moveable object, Moves move) {
	for (auto& texture_move : moveables[(int)object].moves) {
		if (texture_move.move == move) {
			return texture_move.texture;
		}
	}
	throw std::runtime_error("Texture doesn't exist");
}
