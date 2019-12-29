#ifndef PEACFUL_MAP_H
#define PEACFUL_MAP_H

#include <vector>

#include "map_fragment.h"
#include "size_proportions.h"

class Map {
public:
	sf::RenderWindow& window;
	std::vector<std::vector<MapFragment>> map;

	TextureBase& texture_base;
	SizeProportions& sizes;


	Map(sf::RenderWindow& render_window, SizeProportions& size_proportions, TextureBase& textures);
	void create_map();
	void draw();
	void save();
	void load();
};

#endif