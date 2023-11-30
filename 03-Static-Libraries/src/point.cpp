#include <iostream>
#include <cmath>

#include "geom/point.hpp"

geom::Point::Point(double x_value, double y_value):
x(x_value), y(y_value)
{}

inline double geom::Point::get_x()
{
    return this->x;
} 

inline double geom::Point::get_y()
{
    return this->y;
}

double geom::Point::distance_to_origin()
{
    return sqrt(x * x + y * y);
}

geom::Point geom::Point::translate(const geom::Point & d)
{
    return geom::Point(this->x + d.x, this->y + d.y);
}

void geom::Point::print_info()
{
    std::cout << "x coordinate: " << this->x << std::endl;
    std::cout << "y coordinate: " << this->y << std::endl;
    std::cout << "distance to origin: " << this->distance_to_origin() << std::endl;
}