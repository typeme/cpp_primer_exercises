#include<iostream>

int main()
{
    int a = 1, b = 2, *p = &a;
    *p = 3;
    std::cout << a << " " << *p << std::endl;
    p = &b;
    std::cout << *p << std::endl;
    return 0;
}
1