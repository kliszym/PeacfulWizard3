#ifndef PAEACFUL_WINDOW_H
#define PAEACFUL_WINDOW_H

#include <SFML/Graphics.hpp>

#include "map.h"
#include "size_proportions.h"

class Window {
public:
    sf::View view;
    sf::RenderWindow window;
    SizeProportions sizes;

    Window();
    SizeProportions& getSizes();
    sf::RenderWindow& getWindow();
    void checkEvents();
    void draw(Map& map);
    void work(Map& map);
};

#endif
