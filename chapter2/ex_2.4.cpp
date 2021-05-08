#include<iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = r1;
    std::cout << r2 << " " << d << std::endl;


}