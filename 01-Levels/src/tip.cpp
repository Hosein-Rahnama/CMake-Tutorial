#include <iostream>

#include "util.hpp"

int main()
{
    double price, tip;
    price = get_double("Enter price meal: ", 0, 1000);
    tip = get_double("Enter tip amount (percent): ", 0, 100);

    double tip_amount = price * tip / 100.0;
    double total = price + tip_amount;
    
    std::cout << "Tip amount: " << tip_amount << std::endl;
    std::cout << "Total amount: " << total << std::endl;
}