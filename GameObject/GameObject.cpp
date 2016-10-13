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

char GameObject::symbol()
{
    return _symbol;
}

int GameObject::x()
{
    return _x;
}

int GameObject::y()
{
    return _y;
}

void GameObject::symbol(char s)
{
    _symbol = s;
}

void GameObject::x(int x)
{
    _x = x;
}

void GameObject::y(int y)
{
    _y = y;
}
