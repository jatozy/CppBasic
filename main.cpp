#include <iostream>

int main(int, char **)
{
    constexpr bool condition = true;

    if (condition)
    {
        std::cout << "Hello, true world!\n";
    }
    else
    {
        std::cout << "Hello, wrong world!\n";
    }
}
