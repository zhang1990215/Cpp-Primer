#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int larger;
    if (v1 >= v2)
    {
        larger = v1;
    }
    else
    {
        larger = v2;
    }
    std::cout << "The larger one is: " << larger << std::endl;
    return 0;
}
