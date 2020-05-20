#include "ResourceHandler.hpp"

/*
 * =====================================================================================
 *
 *       Filename:  ResourceHandler.cpp
 *
 *    Description: The interface for the programmer to utilize resources.
 *
 *        Version:  1.0
 *        Created:  05/01/2020 11:20:04 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


//========//
// PUBLIC //
//========//


/*
 *--------------------------------------------------------------------------------------
 *       Class:  ResourceHadler
 *      Method:  ResourceHadler :: getPtr
 * Description:  Can be implemented in a better way -> See Game Engine Design Notes
 *--------------------------------------------------------------------------------------
 */
ResourceHandler* ResourceHandler::Instance()
{
  static ResourceHandler handler; 
  return &handler;
}

//=========//
// PRIVATE //
//=========//


/*
 *--------------------------------------------------------------------------------------
 *       Class:  ResourceHadler
 *      Method:  ResourceHadler :: ResourceHandler
 * Description:  
 *--------------------------------------------------------------------------------------
 */
ResourceHandler::ResourceHandler():
  font("font", "otf"),
  texture("texture", "png")
{}
