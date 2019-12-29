#include "texture_loader.h"

TextureLoader::TextureLoader(TextureBase& textures) :
	texture_base(textures) {}

void TextureLoader::load() {
    texture_base.load(BlockMaterial::GRASS, BlockType::FULL_LEFT_CORNER, "images/grass/LeftEdgeFull.png");
    texture_base.load(BlockMaterial::GRASS, BlockType::FULL_MIDDLE, "images/grass/MiddleFull.png");
    texture_base.load(BlockMaterial::GRASS, BlockType::FULL_RIGHT_CORNER, "images/grass/RightEdgeFull.png");
}