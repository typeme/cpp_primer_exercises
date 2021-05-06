#include<iostream>

int main()
{
    int a,b;
    std::cout << "please input two numebrs: " << std::endl;
    std::cin >> a >> b;
    int start = a;
    while(start != b) {
        std::cout << start << std::endl;
        if(start < b) ++start;
        if(start > b) --start;
    }
    std::cout << b << std::endl;
    return 0;
}
