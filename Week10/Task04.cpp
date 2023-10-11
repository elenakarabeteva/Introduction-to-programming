#include <iostream>

int main()
{
    int i = 4;

    [=]() mutable {
        i++;
        std::cout << "Inside first lambda: " << i << std::endl;
    } (); 
    std::cout << "After first lambda: " << i << std::endl;

    [&] { i++; } ();
    std::cout << "After second lambda: " << i << std::endl;

    return 0;
}