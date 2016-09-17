// GameObject.cpp

#include "GameObject.hpp"

GameObject::GameObject(int x, int y)
    : mSymbol(' ')
    , mX(x)
    , mY(y)
{

}

GameObject::~GameObject()
{

}

char symbol()
{
    return _symbol;
}

int x()
{
    return _x;
}

int y()
{
    return _y;
}

void x(int x)
{
    _x = x;
}

void y(int y)
{
    _y = y;
}
