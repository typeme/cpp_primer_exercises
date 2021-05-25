#include<iostream>

struct mSales_data {
    std::string bookNo;
    double units_price = 0;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    mSales_data item1, item2;

    std::cin >> item1.bookNo >> item1.units_price >> item1.units_sold;
    std::cin >> item2.bookNo >> item2.units_price >> item2.units_sold;

    item1.revenue = item1.units_price * item1.units_sold;
    item2.revenue = item2.units_price * item2.units_sold;

    if(item1.bookNo == item2.bookNo)
    {
        std::cout << "item number is " << item1.bookNo << " total price is " << item1.revenue + item2.revenue << std::endl;
    } else {
        std::cout << "book number doesn't match" << std::endl;
    }


    return 0;
}