// Tile.cpp

#include "../inc/GameObject/Tile.hpp"

Tile::Tile(int x, int y)
    : GameObject(x, y)
{

}

Tile::Tile(int x, int y, char symbol)
    : GameObject(x, y, symbol)
{

}

Tile::~Tile()
{

}
