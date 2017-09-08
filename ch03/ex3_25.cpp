#include <vector>
#include <iostream>

using std::vector; using std::cout; using std::cin; using std::endl;

int main(int argc, char const *argv[])
{
    vector<unsigned> scores(11, 0);
    for (unsigned grade; cin >> grade;/* */)
        if (grade <= 100)
            ++*(scores.begin() + grade / 10);

    for (auto s : scores)
        cout << s << " ";
    cout << endl;

    return 0;
}
