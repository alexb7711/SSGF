#include "Button.hpp"

namespace GUI
{
  //--------//
  // PUBLIC //
  //--------//

  //=============================================================================
  //
  Button::Button():
    GUI::Widget("Button")
  {
    sf::Vector2f tempPosition(200.f, 200.f);
    sf::Vector2f tempSize(100.f, 50.f);

    this->setPosition(tempPosition);
    this->setSize(tempSize);
  }
  
  //=============================================================================
  //
  void Button::render(sf::RenderTarget* renderer)
  {
    renderer->draw(m_button);
    return;
  }

  //=============================================================================
  //
  void Button::handleEvents(sf::Event e)
  {}

  //=============================================================================
  //
  std::string Button::getType()
  {
    return Widget::m_widget_type; 
  }

  //=============================================================================
  //
  sf::Vector2f Button::getSize()
  {
    return m_button.getSize();
  }
  
  //=============================================================================
  //
  void Button::setSize(sf::Vector2f size)
  {
    m_button.setSize(size);
    return;
  }

  //=============================================================================
  //
  sf::Vector2f Button::getPosition()
  {
    return m_button.getPosition();
  }

  //=============================================================================
  //
  void Button::setPosition(sf::Vector2f& position)
  {
    m_button.setPosition(position);
    return;
  }
  
  //=============================================================================
  //
  Button::~Button()
  {}
  
  //---------//
  // PRIVATE //
  //---------//

  //=============================================================================
  //
  void Button::isHovering()
  {}

  //=============================================================================
  //
  void Button::isClicked()
  {}

}
