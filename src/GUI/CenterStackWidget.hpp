// File: CenterStackWidget.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: Takes an arbitrary amount of widgets and centers them on the
//              screen.

#ifndef _CENTER_STACK_WIDGETS_H_ 
#define _CENTER_STACK_WIDGETS_H_ 

// Typedefines
typedef unsigned int uint; 

// C/C++ Standard Library
#include <vector>
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "Widget.hpp"
#include "Button.hpp"

namespace GUI
{

//===============================================================================
//
class CenterStackWidget
{
public: 
  // Public Methods
  CenterStackWidget(sf::RenderWindow* window);

  void setTitle(const std::string& title);
  void addWidget();
  void update();
  void render(sf::RenderTarget* renderer);
  void handleEvents();

  ~CenterStackWidget();

private:
  // Private Methods
  void calculatePositions();

  // Private Member Variables
  sf::RenderWindow*    p_window;
  std::vector<Widget*> p_widget_vector;
  float                m_button_spacing;
};

}
#endif
