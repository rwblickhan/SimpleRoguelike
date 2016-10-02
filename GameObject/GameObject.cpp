// GameObject.cpp

#include "../inc/GameObject/GameObject.hpp"

GameObject::GameObject(int x, int y)
    : _symbol(' ')
    , _x(x)
    , _y(y)
{

}

GameObject::GameObject(int x, int y, char symbol)
    : _symbol(symbol)
    , _x(x)
    , _y(y)
{

}

GameObject::~GameObject()
{

}

char symbol()
{
    //return _symbol;
    return ' ';
}

int x()
{
    //return _x;
    return 1;
}

int y()
{
    //return _y;
    return 1;
}

void symbol(char s)
{
    //_symbol = s;
}

void x(int x)
{
    //_x = x;
}

void y(int y)
{
    //_y = y;
}
