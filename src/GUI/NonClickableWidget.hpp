/*
 * =====================================================================================
 *
 *       Filename:  NonClickableWidget.hpp
 *
 *    Description: Widget interface that cannot be clicked 
 *
 *        Version:  1.0
 *        Created:  04/30/2020 02:44:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _NONCLICKABLE_WIDGET_H_ 
#define _NONCLICKABLE_WIDGET_H_ 

// C/C++ Standard Library
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "Widget.hpp"

namespace GUI
{

  class NonClickableWidget : public Widget
  {
  public: 
    // Public Methods
    NonClickableWidget(std::string type):
      Widget(type)
    {}      

    virtual ~NonClickableWidget() = default;
  };

}

#endif
