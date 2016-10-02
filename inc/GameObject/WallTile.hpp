// WallTile.hpp
// model for tile that represents a wall

#ifndef __WALL_TILE_HPP__
#define __WALL_TILE_HPP__

#include "Tile.hpp"

class WallTile : public Tile
{
public:
    WallTile(int x, int y);
    ~WallTile();
};

#endif
