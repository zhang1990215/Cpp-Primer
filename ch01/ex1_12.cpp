#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;

    return 0;
}