#include <SFML/Graphics.hpp>

#include "map.h"
#include "size_proportions.h"
#include "texture_base.h"
#include "texture_loader.h"
#include "window.h"

int main()
{
    TextureBase texture_base;
    Window window(texture_base);

    TextureLoader texture_loader(texture_base);
    texture_loader.load();

//    Map map(window.getSizes(), texture_base);
//    map.create_map();

//    sf::Thread events(&Window::work, &window);
//    events.launch();

    window.work();

    return 0;
}