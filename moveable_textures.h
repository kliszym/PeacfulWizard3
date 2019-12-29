#ifndef PEACFUL_MOVEABLE_TEXTURES_H
#define PEACFUL_MOVEABLE_TEXTURES_H

#include <SFML/Graphics.hpp>

#include "moves.h"

struct MoveTexture {
	Moves move;
	sf::Texture texture;
};

class MoveableTextures {
public:
	std::vector<MoveTexture> moves;
};

#endif
