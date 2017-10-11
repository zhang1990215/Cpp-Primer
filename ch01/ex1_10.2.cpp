#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0;
    int val = 50;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }
    std::cout << sum << '\n';

    return 0;
}