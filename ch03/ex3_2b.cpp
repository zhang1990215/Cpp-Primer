// read the standard input a word at a time
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    for (string str; cin >> str; cout << str << endl);
    return 0;
}
