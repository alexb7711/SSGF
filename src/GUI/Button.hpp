// File: Button.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: A basic button class.

#ifndef _BUTTON_H_
#define _BUTTON_H_ 

// C/C++ Standard Library
#include <string>

// Custom Header Files
#include "Widget.hpp"

namespace GUI
{

//===============================================================================
//
class Button : public Widget
{
public: 
  // Public Methods
  Button();
  void         render(sf::RenderTarget* renderer)  override;
  void         handleEvents(sf::Event e)           override;
    
  std::string  getType()                           override;
  sf::Vector2f getPosition()                       override;
  void         setPosition(sf::Vector2f& position) override;

  void         setFunction(); 
  sf::Vector2f getSize(); 
  void         setSize(sf::Vector2f size);

  ~Button();

private:
  // Private Methods
  void         isHovering();
  void         isClicked();

  // Private Member Variables
  sf::RectangleShape m_button;

};

}

#endif