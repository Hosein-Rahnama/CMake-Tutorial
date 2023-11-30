#pragma once

namespace geom
{
    class Point;
}

class geom::Point 
{
public:
    Point(double, double);
    double get_x();
    double get_y();
    double distance_to_origin();
    geom::Point translate(const geom::Point &);
    void print_info();
private:
    double x;
    double y;
};