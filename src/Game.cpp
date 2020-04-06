#include "Game.hpp"

//===============================================================================
//
Game::Game():
  m_window(new sf::RenderWindow(sf::VideoMode(1280, 720), "Game Title"))
{
  m_window->setPosition({m_window->getPosition().x, 0});
  m_window->setFramerateLimit(60);
}

//===============================================================================
//
void Game::run()
{
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (m_window->isOpen() && !m_quit)
  {
    sf::Event event;
    while (m_window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            m_window->close();
    }

    m_window->clear();
    m_window->draw(shape);
    m_window->display();
  }
}
