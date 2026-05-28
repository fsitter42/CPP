#include "Point.hpp"

Fixed cross(Point const a, Point const b, Point const p);

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    // Kreuzprodukt für alle 3 Kanten berechnen
    Fixed d1 = cross(a, b, point);
    Fixed d2 = cross(b, c, point);
    Fixed d3 = cross(c, a, point);
    // 0 → false (auf Kante)
    Fixed zero; // default constructor setzt auf 0
    if (d1 == zero || d2 == zero || d3 == zero)
        return (false);
    // Vorzeichen vergleichen
    bool allPos;
    bool allNeg;
    allPos = (d1 > zero) && (d2 > zero) && (d3 > zero);
    allNeg = (d1 < zero) && (d2 < zero) && (d3 < zero);
    return (allPos || allNeg);
}

Fixed cross(Point const a, Point const b, Point const p)
{
    return ((b.getX() - a.getX()) * (p.getY() - a.getY()) - (b.getY() - a.getY()) * (p.getX() - a.getX()));
}
