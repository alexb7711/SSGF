/*
 * =====================================================================================
 *
 *       Filename:  TileMap.hpp
 *
 *    Description:  Front end for tile maps.
 *
 *        Version:  1.0
 *        Created:  05/13/2020 08:59:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alexander Brown (), alex.brown7711@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _TILE_MAP_H_
#define _TILE_MAP_H_

// C/C++ Standard Library
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

// SFML Libraries
#include <SFML/Graphics.hpp>

// Custom Header Files
#include "../ObjectTemplates/StaticObject.hpp"
#include "../../ResourceHandler/ResourceHandler.hpp"
#include "Tile.hpp"

class TileMap : public StaticObject
{
  public:
    // Public Methods
    static TileMap* Instance();
    
    void render(sf::RenderTarget* renderer) override;
    void loadDictionary(std::string map_name);
    void loadMap(std::string map_name);
    void setTexture(sf::Texture& texture);
    void setTileWidth(uint width);
    void update(const int& elapsed_time)    override;

    ~TileMap();
    
  private:
    // Private Methods
    TileMap();
    void extractMapData(std::ifstream& file_in, std::string& line);
    void readFromFileCallback(void (TileMap::*method)(std::ifstream&, std::string&),
                                   std::string& map_name);
    void updateMap(std::vector<std::string> map_update);

    // Private Member Variables
    std::vector<std::vector<Tile>> m_map;
    std::string                    m_map_text_file;
    ResourceHandler*               m_resource_handler;
    sf::Texture                    m_texture;
    std::map<char, sf::Vector2i>   m_tile_dictionary;
    uint                           m_tile_width   = 50;      // Assuming a square
    bool                           m_needs_update = false;
};

#endif
