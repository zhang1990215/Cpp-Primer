#include <iostream>
#include "ex2_42.h"

int main(int argc, char const *argv[])
{
    Sales_data book;
    double price;
    std::cin >> book.bookNo >> book.units_sold >> price;
    book.CalcRevenue(price);
    book.Print();

    return 0;
}
