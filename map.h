#ifndef PEACFUL_MAP_H
#define PEACFUL_MAP_H

#include <vector>

#include "map_fragment.h"
#include "size_proportions.h"

class Map {
public:
	TextureBase& texture_base;

	SizeProportions& sizes;

	std::vector<std::vector<MapFragment>> map;

	Map(SizeProportions& size_proportions, TextureBase& textures);
	void create_map();
	void draw(sf::RenderWindow& window);
	void save();
	void load();
};

#endif