// GameObject.hpp
// model for generic object in game world
// TODO: make abstract

#ifndef __GAME_OBJECT_HPP__
#define __GAME_OBJECT_HPP__

class GameObject
{
public:
    GameObject(int x, int y);
    ~GameObject();

    //getters
    char symbol();
    int x();
    int y();

    //setters
    void symbol(char s);
    void x(int x);
    void y(int y);

protected:
    GameObject(int x, int y, char symbol);
    char _symbol;
    int _x;
    int _y;
};

#endif
