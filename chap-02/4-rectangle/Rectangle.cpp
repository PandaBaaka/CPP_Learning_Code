#include "Rectangle.h"

float Rectangle::_default_size = 0.f;

Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
{}

// Rectangle::Rectangle(float size)
//     : _length { size }
//     , _width { size }
// {}

Rectangle::Rectangle(float size)
    : Rectangle { size, size }
{}

Rectangle::Rectangle()
    : Rectangle { _default_size }
{}

void Rectangle::scale(float ratio)
{
    _length *= ratio;
    _width *= ratio;
}

void Rectangle::set_default_size(float size)
{
    _default_size = size;
}

std::ostream& operator<<(std::ostream& stream, const Rectangle& r)
{
    return stream << "{ L: " << r.get_length() << ", W: " << r.get_width() << " }";
}