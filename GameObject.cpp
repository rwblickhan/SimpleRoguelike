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
    return mSymbol;
}

int x()
{
    return mX;
}

int y()
{
    return mY;
}

void x(int x)
{
    mX = x;
}

void y(int y)
{
    mY = y;
}
