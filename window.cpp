#include "window.h"

Window::Window(TextureBase& texture_base) :
    sizes(Size(800,600), Size(16,16)), view((sf::FloatRect(0.f, 0.f, 800.f, 600.f))),
    window(sf::VideoMode(sizes.getWindowsSize().width, sizes.getWindowsSize().height, 32), "Peacful Wizard", sf::Style::Fullscreen),
    textures(texture_base),
    map(Map(sizes, textures)) {
        window.setMouseCursorVisible(false);
        window.setFramerateLimit(60);
        window.setView(view);

        map.create_map();
}

SizeProportions& Window::getSizes() {
    return sizes;
}

sf::RenderWindow& Window::getWindow() {
    return window;
}

void Window::checkEvents() {
    sf::Event event;
    while (window.pollEvent(event))
    {
        switch (event.type) {
        case sf::Event::KeyPressed:
            if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
                break;
            }
        case sf::Event::Closed:
            window.close();
            break;
        default:
            break;
        }
    }
}

void Window::draw() {
    window.clear();
    map.draw(window);
    window.display();
}

void Window::work() {
    while (window.isOpen())
    {
        checkEvents();
        draw();
    }
}