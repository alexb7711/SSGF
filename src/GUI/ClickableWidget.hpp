/*
 * =====================================================================================
 *
 *       Filename:  ClickableWidget.hpp
 *
 *    Description: Widget interface that can be clicked
 *
 *        Version:  1.0
 *        Created:  04/30/2020 02:37:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _CLICKABLE_WIDGET_H_ 
#define _CLICKABLE_WIDGET_H_ 

// C/C++ Standard Library
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "Widget.hpp"

namespace GUI
{

  class ClickableWidget : public Widget
  {
  public: 
    // Public Methods
    ClickableWidget(std::string type):
      Widget(type)
    {}      

    virtual bool isHovering(sf::RenderWindow* window) = 0;
    virtual void isClicked()                          = 0;
    virtual void execute()                            = 0;
    virtual void setFunction()                        = 0;

    virtual ~ClickableWidget()                        = default;
  };

}

#endif
