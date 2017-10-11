#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int val = 50; val <= 100; ++val)
        sum += val;
    std::cout << sum << '\n';

    return 0;
}