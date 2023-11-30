#include <iostream>
#include <string>


// Gets a double within a specified range.
double get_double(std::string prompt, double min, double max)
{
    double input;

    do
    {
        std::cout << prompt;
        std::cin >> input;
        if (input < min)
            printf("Must be at least %lf\n", min);
        if (input > max)
            printf("Must be at most %lf\n", max);
    }
    while (input < min || input > max);

    return input;
}