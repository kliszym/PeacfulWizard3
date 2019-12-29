#ifndef PAEACFUL_WINDOW_H
#define PAEACFUL_WINDOW_H

#include <SFML/Graphics.hpp>

#include "map.h"
#include "size_proportions.h"

class Window {
public:
    TextureBase& textures;

    sf::View view;
    sf::RenderWindow window;
    SizeProportions sizes;
    Map map;

    Window(TextureBase& texture_base);
    SizeProportions& getSizes();
    sf::RenderWindow& getWindow();
    void checkEvents();
    void draw();
    void work();
};

#endif
