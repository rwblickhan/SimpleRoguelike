// Tile.hpp
// model for generic tile in the game world
// TODO: make abstract

#ifndef __TILE_HPP__
#define __TILE_HPP__

#include "GameObject.hpp"

class Tile : public GameObject
{
public:
    Tile(int x, int y);
    ~Tile();

protected:
    Tile(int x, int y, char symbol);
};

#endif
