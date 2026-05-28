#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
        
    public:
        Point();
        Point(const float a, const float b);
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();

        //methods
        Fixed const& getX(void) const;
        Fixed const& getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif