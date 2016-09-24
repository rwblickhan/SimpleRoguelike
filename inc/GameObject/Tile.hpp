// Tile.hpp
// model for generic tile in the game world
// TODO: make abstract

#ifndef __TILE_HPP__
#define __TILE_HPP__

class Tile : public GameObject
{
public:
    Tile(int x, int y);
    ~Tile();
}

#endif
