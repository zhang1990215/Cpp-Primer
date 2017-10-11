#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0;
    int val = 10;
    while (val >= 0)
    {
        sum += val;
        --val;
    }
    std::cout << sum << '\n';
    return 0;
}
