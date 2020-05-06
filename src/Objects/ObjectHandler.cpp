/*
 * =====================================================================================
 *
 *       Filename:  ObjectHandler.cpp
 *
 *    Description: Interface used by the user to manage objects in the game. 
 *
 *        Version:  1.0
 *        Created:  04/29/2020 11:39:09 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "ObjectHandler.hpp"
#include "AnimatedSprite.hpp"

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: ObjetHandler
 * Description:  
 *--------------------------------------------------------------------------------------
 */
template <class Object>
ObjectHandler<Object>::ObjectHandler()
{}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: ObjectHandler
 * Description:  
 *--------------------------------------------------------------------------------------
 */
template <class Object>
ObjectHandler<Object>::ObjectHandler(unsigned amount)
{
//  spawnObject(amount);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: spawnObject
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
void ObjectHandler<Object>::spawnObject(Object* newObject)
{
    m_object.push_back(newObject);

  return;
}  

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: spawnObject
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
void ObjectHandler<Object>::spawnObject(std::vector<Object> newObject)
{
  for(unsigned i = 0; i < newObject.size(); ++i)
    m_object.push_back(&newObject[i]);

  return;
}  

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: deleteObject
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
void ObjectHandler<Object>::deleteObject(unsigned amount)
{
  for (unsigned i = 0; i < amount && i < m_object.size(); ++i)
    m_object.erase(m_object.begin() + i);

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: deleteObject
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
void ObjectHandler<Object>::deleteObject(unsigned amount, unsigned index)
{}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: wipeObjects
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
void ObjectHandler<Object>::wipeObjects()
{
  // Clear and release memory
  m_object.clear();
  std::vector<Object*>().swap(m_object);
  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: update
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
void ObjectHandler<Object>::update(int& elapsed_time)
{
  for (unsigned i = 0; i < m_object.size(); ++i)
    m_object[i]->update(elapsed_time);

  return;
}

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: render
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
void ObjectHandler<Object>::render(sf::RenderTarget* renderer)
{
  for (unsigned i = 0; i < m_object.size(); ++i)
    m_object[i]->render(renderer);

  return;
}
    

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: ~Object
 * Description
 *
 *--------------------------------------------------------------------------------------
 */

/*
 *--------------------------------------------------------------------------------------
 *       Class:  ObjectHandler
 *      Method:  ObjectHandler :: ~ObjectHandler
 * Description
 *
 *--------------------------------------------------------------------------------------
 */
template <class Object>
ObjectHandler<Object>::~ObjectHandler()
{
  wipeObjects();
  return;
}

// Predefine template of generic Object type 
//template class ObjectHandler<AnimatedSprite>;
template class ObjectHandler<Object>;
