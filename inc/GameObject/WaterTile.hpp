// WaterTile.hpp
// model for tile that represents water

#ifndef __WATER_TILE_HPP__
#define __WATER_TILE_HPP__

#include "Tile.hpp"

class WaterTile : public Tile
{
public:
    WaterTile(int x, int y);
    ~WaterTile();
};

#endif
