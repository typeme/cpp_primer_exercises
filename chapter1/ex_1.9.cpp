#include<iostream>

int main() 
{
    int a = 50, sum = 0;
    
    while(a <= 100) {
        sum += a;
        a++;
    }
    std::cout << "the sum is : "<< sum << std::endl;
    return 0;
}
