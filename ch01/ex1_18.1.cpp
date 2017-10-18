#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2; //read intput
    //use smaller number as lower bound for summation
    //and larger number as upper bound
    int lower, upper;
    if (v1 <= v2)
    {
        lower = v1;
        upper = v2;
    }
    else
    {
        lower = v2;
        upper = v1;
    }
    int count = 1;
    //print values from lower up to and include upper
    for (int val = lower; val <= upper; ++val)
    {
        if (count >= 10)
        {
            std::cout << val << std::endl;
            count = 1;
        }
        else
        {
            std::cout << val << ", ";
            ++count;
        }
    }

    return 0;
}