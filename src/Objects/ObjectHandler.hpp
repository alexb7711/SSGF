/*
 * =====================================================================================
 *
 *       Filename:  ObjectHandler.hpp
 *
 *    Description: Interface used by the user to manage objects in the game. 
 *
 *        Version:  1.0
 *        Created:  04/29/2020 11:39:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <vector>

#ifndef _OBJECT_HANDLER_H_
#define _OBJECT_HANDLER_H_

// C/C++ Standard Library
#include <vector>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files

template <class Object>
class ObjectHandler
{
  public:
    // Public Methods
    ObjectHandler();
    ObjectHandler(unsigned amount);

    void spawnObject(Object* newObject);
    void spawnObject(std::vector<Object> newObject);
    void deleteObject(unsigned amount);
    void deleteObject(unsigned amount, unsigned index);
    void wipeObjects();

    void update();
    void render(sf::RenderTarget* renderer);

    ~ObjectHandler();
    
    // Public Member Variables
    std::vector<Object*> m_object;

  private:
};

#endif
