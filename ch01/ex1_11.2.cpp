#include <iostream>

int main(int argc, char const *argv[])
{
    int sum = 0;
    for (int val = 10; val >= 0; --val)
        sum += val;
    std::cout << sum << '\n';
    return 0;
}
