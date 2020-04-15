#include "ResourceHandler.hpp"

//========//
// PUBLIC //
//========//

//===============================================================================
//
ResourceHandler* ResourceHandler::getPtr()
{
  static ResourceHandler handler; 
  return &handler;
}

//=========//
// PRIVATE //
//=========//

//===============================================================================
//
ResourceHandler::ResourceHandler()
{}
