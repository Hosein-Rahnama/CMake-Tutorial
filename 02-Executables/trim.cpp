#include <iostream>
#include <string>


// Removes white space characters
int main(int argc, char * argv[])
{
    int count = 1;
    std::string name;

    // Remove middle white spaces
    while (count < argc)
    {
        name += argv[count++];
    }

    // Remove starting and ending white spaces
    name.erase(0, name.find_first_not_of(" \t\n\r\f\v"));
    name.erase(name.find_last_not_of(" \t\n\r\f\v") + 1);
    std::cout << name << std::endl;

    return 0;
}