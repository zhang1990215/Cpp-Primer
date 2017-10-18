#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter two numbers:" << std::endl;
    int lower, upper;
    std::cin >> lower >> upper; //read intput
    //use smaller number as lower bound for summation
    //and larger number as upper bound
    // int lower, upper;
    // if (v1 <= v2)
    // {
    //     lower = v1;
    //     upper = v2;
    // }
    // else
    // {
    //     lower = v2;
    //     upper = v1;
    // }
    int sum = 0;
    //sum values from lower up to and include upper
    for (int val = lower; val <= upper; ++val)
        sum += val; //sum = sum +val
    std::cout << "sum of " << lower
              << " to " << upper
              << " inclusive is "
              << sum << std::endl;

    return 0;
}