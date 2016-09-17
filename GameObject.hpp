// GameObject.hpp

#ifndef __GAME_OBJECT_HPP__
#define __GAME_OBJECT_HPP__

class GameObject
{
protected:
    char _symbol;
    int _x;
    int _y;

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

#endif
