#include <iostream>

int main(int argc, char const *argv[])
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0;
}