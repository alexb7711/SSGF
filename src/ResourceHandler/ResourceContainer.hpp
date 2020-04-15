// File: ResourceContainer.hpp
// Author: Alexander Brown
// Version: 0.1
// Changelog: 
// Description: Stores resources such as sound, texture, and fonts.

#ifndef _RESOURCE_CONTAINER_HPP_ 
#define _RESOURCE_CONTAINER_HPP_ 

// C/C++ Standard Library
#include <map>
#include <string>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files

template<class Resource>
class ResourceContainer
{
  public:
    // Public Methods
    ResourceContainer()
    {}

    const Resource* get(const std::string& name)
    {
      return this;
    }

    bool exists (std::string& name)
    {
      return true;
    }

    void add(const std::string& name)
    {}

    void remove (const std::string& name)
    {}

    ~ResourceContainer()
    {}

  private:
    // Private Methods
    void getFullName(const std::string& name)
    {}

    // Private Member Variables
    std::map<std::string, Resource> m_resource;
    const std::string m_folder;
    const std::string m_extension;

};

#endif
