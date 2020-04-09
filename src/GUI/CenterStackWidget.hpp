// File: CenterStackWidget.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: Takes an arbitrary amount of widgets and centers them on the
//              screen.

#ifndef _CENTER_STACK_WIDGETS_H_ 
#define _CENTER_STACK_WIDGETS_H_ 

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
  CenterStackWidget();

  void setTitle(const std::string& title);
  void addWidget();
  void render(sf::RenderTarget* renderer);
  void handleEvents();

  ~CenterStackWidget();

private:
  std::vector<Widget*> p_widget_vector;


};

}
#endif
