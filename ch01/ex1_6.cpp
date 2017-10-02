#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter two numbers:";
    std::cout << std::endl;
    int v1, v2;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sum of "
              << v1;
    std::cout << " and "
              << v2;
    std::cout << " is ";
    std::cout << v1 + v2;

    return 0;
}
