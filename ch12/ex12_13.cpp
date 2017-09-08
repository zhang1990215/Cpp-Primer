// @Yue Wang
//
// ex12.13 What happens if we excute the following code?
//
//  generate a runtime error : double free
//

#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
    {
        auto sp = std::make_shared<int>();
        auto p = sp.get();
        delete p;
    }

    return 0;
}
