#include <iostream>

#include "geom/point.hpp"

int main()
{
    geom::Point A = geom::Point(1, 1);
    geom::Point d = geom::Point(2, 3);
    geom::Point B = A.translate(d);

    std::cout << "Point A" << std::endl;
    A.print_info();
    std::cout << std::endl;
    std::cout << "Point B" << std::endl;
    B.print_info();

    return 0;
}