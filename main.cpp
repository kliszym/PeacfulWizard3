#include <SFML/Graphics.hpp>

#include "map.h"
#include "size_proportions.h"
#include "texture_base.h"
#include "texture_loader.h"
#include "window.h"

#include <iostream> //TODO: delete

void func() {
    sf::Clock clock;
    while (1) {
        sf::Time elapsed1 = clock.getElapsedTime();
        if (elapsed1 > sf::seconds(0.2f)) {
            std::cout << "0.2 sec long" << std::endl;
            clock.restart();
        }
    }
}

int main() {
    
    Window window;

    TextureBase texture_base;
    TextureLoader texture_loader(texture_base);
    texture_loader.load();

    Map map(window.getWindow(), window.getSizes(), texture_base);
    map.create_map();

//    sf::Thread events(&Window::work, &window);
//    events.launch();

    sf::Thread events(func);
    window.addThread(events);

    window.work(map);

    return 0;
}