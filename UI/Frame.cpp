#include "../inc/UI/Frame.hpp"

Frame::Frame(int width, int height, int x_0, int y_0)
    : _height(height)
    , _width(width)
    , _y(y_0)
    , _x(x_0)
    , _pWindow(nullptr)
    , _hasSuper(false)
    , _pSuper(nullptr)
{
    _pWindow = newwin(height, width, y_0, x_0);
}

Frame::Frame(Frame& super, int width, int height, int x_0, int y_0)
    : _height(height)
    , _width(width)
    , _y(y_0)
    , _x(x_0)
    , _pSuper(super.window())
    , _pWindow(nullptr)
    , _hasSuper(true)
{
    _pWindow = derwin(super.window(), height, width, y_0, x_0);
}

Frame::~Frame()
{
    delwin(_pWindow);
}

int Frame::height()
{
    return _height;
}

int Frame::width()
{
    return _width;
}

WINDOW* Frame::window()
{
    return _pWindow;
}

WINDOW* Frame::superWindow()
{
    return _pSuper;
}

void Frame::draw(int x, int y, char c)
{
    mvwaddch(_pWindow, y, x, c);
}

void Frame::erase(int x, int y, char c)
{
    mvwaddch(_pWindow, y, x, c);
}

void Frame::refresh()
{
    if (_hasSuper) touchwin(_pSuper);
    wrefresh(_pWindow);
}

void Frame::move(int x, int y)
{
    if (_hasSuper)
    {
        mvderwin(_pWindow, y, x);
        _x = x;
        _y = y;
        refresh();
    }
}

void Frame::fillWindow()
{
    //TODO: implement
}

void Frame::center(int x, int y)
{
    //TODO: implement
}
