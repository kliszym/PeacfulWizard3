#ifndef PEACFUL_DRAW_OBJECT_H
#define PEACFUL_DRAW_OBJECT_H

#include <SFML/Graphics.hpp>

#include "size.h"
#include "moveable.h"
#include "moves.h"
#include "texture_base.h"

class DrawObject {
	Size boundaries;
	sf::Sprite sprite;
	TextureBase& textures;
	sf::RenderWindow& window;
	

	DrawObject(sf::RenderWindow& render_window, TextureBase& texture_base, Size size, Moveable object) :
		window(render_window), textures(texture_base), boundaries(size), sprite(textures.get(object, Moves::NONE)) {}

};

#endif
