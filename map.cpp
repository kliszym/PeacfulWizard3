#include "map.h"

Map::Map(sf::RenderWindow& render_window, SizeProportions& size_proportions, TextureBase& textures):
	window(render_window), sizes(size_proportions), texture_base(textures) {
	map.resize(sizes.getMapSize().height);
	for (auto& map_row : map) {
		map_row.resize(sizes.getMapSize().width);
	}
}

void Map::create_map() {
	int row = 24;
	map[row][5] = MapFragment(texture_base, BlockMaterial::GRASS, BlockType::FULL_LEFT_CORNER);
	map[row][6] = MapFragment(texture_base, BlockMaterial::GRASS, BlockType::FULL_MIDDLE);
	map[row][7] = MapFragment(texture_base, BlockMaterial::GRASS, BlockType::FULL_MIDDLE);
	map[row][8] = MapFragment(texture_base, BlockMaterial::GRASS, BlockType::FULL_MIDDLE);
	map[row][9] = MapFragment(texture_base, BlockMaterial::GRASS, BlockType::FULL_RIGHT_CORNER);
}

void Map::save() {

}

void Map::load() {
	
}

void Map::draw() {
	int row = 0;
	int col = 0;
	for (auto& map_line : map) {
		col = 0;
		for (auto& map_fragment : map_line) {
			if (map_fragment.material != BlockMaterial::NONE && map_fragment.type != BlockType::NONE) {
				map_fragment.sprite.setPosition((float)col * sizes.getBlockSize().width, (float)row * sizes.getBlockSize().height);
				window.draw(map_fragment.sprite);
			}
			col++;
		}
		row++;
	}
}