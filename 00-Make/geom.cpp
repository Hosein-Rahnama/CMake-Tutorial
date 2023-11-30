#include <iostream>
#include <cmath>

#include "util.hpp"

// Calculates the distance of a point to origin.
int main()
{
    double x = get_double("Enter the x value: ", -100, 100);
    double y = get_double("Enter the y value: ", -100, 100);

    double d = sqrt(pow(x, 2) + pow(y, 2));

    std::cout << "Distance is " << d << " Meters." << std::endl;
}