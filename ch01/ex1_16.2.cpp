#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
    std::cout << "This program while count the negative numbers of the input numbers"
              << "Numbers: " << std::endl;
    int count, temp;
    while (std::cin >> temp)
    {
        if (temp < 0)
        {
            count++;
        }
    }
    std::cout << "The count of negative numbers is: "
              << count << std::endl;
    return 0;
}
