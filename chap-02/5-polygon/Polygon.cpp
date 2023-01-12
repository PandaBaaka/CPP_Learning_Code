#include "Polygon.h"

void Polygon::add_vertex(int x, int y)
{
    _vertices.emplace_back(x, y);
}

const Vertex& Polygon::get_vertex(size_t index) const
{
    return _vertices[index];
}

std::ostream& operator<<(std::ostream& stream, const Polygon& p)
{
    for (const auto& v : p._vertices)
    {
        stream << "(" << v.first << "," << v.second << ") ";
    }
    return stream;
}