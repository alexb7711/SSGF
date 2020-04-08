// File: Widget.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: Base class for generating GUI for the user.

#ifndef _WIDGET_H_ 
#define _WIDGET_H_ 

// C/C++ Standard Library
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>

namespace GUI
{

//===============================================================================
//
class Widget 
{
public: 
  // Public Methods
  Widget(std::string type):
    m_widget_type (type)
  {}      
 
  virtual void          render(sf::RenderTarget* renderer) = 0;
  virtual void          handleEvents(sf::Event e) = 0;
  virtual std::string   getType() = 0;
  virtual sf::Vector2f  getPosition() = 0;
  virtual void          setPosition(sf::Vector2f& position) = 0;

  virtual ~Widget() = default;

protected:
  // Protected Member Variables
  std::string  m_widget_type;


};

}

#endif
