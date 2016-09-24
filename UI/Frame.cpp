#include "Frame.hpp"

Frame::Frame(int width, int height, int x_0, int y_0)
    : _hasSuper = false
    , _super    = nullptr
    , _window   = newwin(rows, cols, row_0, col_0)
    , _height   = y
    , _width    = x
    , _x        = x_0
    , _y        = y_0;
{

}

Frame::Frame(Frame& super, int width, int height, int x_0, int y_0)
    : _hasSuper = true
    , _super    = super
    , _window   = newwin(rows, cols, row_0, col_0)
    , _height   = y
    , _width    = x
    , _x        = x_0
    , _y        = y_0;
{

}

Frame::~Frame()
{
    delwin(_window);
}

void Frame::draw(GameObject& o)
{
    mvwaddch(_window, o.y(), o.x(), o.symbol());
}

void Frame::draw(GameObject& o, int x, int y)
{
    //TODO
}

void Frame::erase(GameObject& o)
{
    mvwaddch(_window, o.y(), o.x(), ' ');
}
void Frame::center(Character& c)
{
    //TODO
}

void Frame::refresh()
{
    if (_hasSuper) touchwin(_super);
    wrefresh(_window);
}

void Frame::move(int x, int y)
{
    if (_hasSuper)
    {
        mvderwin(_window, y, x)
        _x = x;
        _y = y;
        refresh();
    }
}

void Frame::fillWindow()
{

}
