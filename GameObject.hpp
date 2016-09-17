// GameObject.hpp

#ifndef __GAME_OBJECT_HPP__
#define __GAME_OBJECT_HPP__

class GameObject
{
protected:
    char mSymbol;
    int mX;
    int mY;

public:
    GameObject(int x, int y);
    ~GameObject();

    //getters
    char symbol();
    int x();
    int y();

    //setters
    char symbol(char s);
    void x(int x);
    void y(int y);
}
