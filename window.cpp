#include "window.h"

Window::Window() :
    sizes(Size(800,600), Size(16,16)), view((sf::FloatRect(0.f, 0.f, 800.f, 600.f))) {
        window.create(sf::VideoMode(sizes.getWindowsSize().width, sizes.getWindowsSize().height, 32), "Peacful Wizard", sf::Style::Fullscreen);
        window.setMouseCursorVisible(false);
        window.setFramerateLimit(60);
        window.setView(view);
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
            clearThreads();
            window.close();
            break;
        default:
            break;
        }
    }
}

void Window::draw(Map& map) {
    window.clear();
    map.draw();
    window.display();
}

void Window::work(Map& map) {
    while (window.isOpen())
    {
        checkEvents();
        draw(map);
    }
}

void Window::addThread(sf::Thread& thread) {
    thread.launch();
    threads.push_back(&thread);
}

void Window::clearThreads() {
    for (auto& thread : threads) {
        thread->terminate();
    }
    threads.clear();
}