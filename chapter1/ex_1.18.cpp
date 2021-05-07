#include<iostream>

int main()
{
    int cnt = 0, count = 0, value = 0;
    if(std::cin >> cnt) {
        count = 1;
        while(std::cin >> value) {
            if(value == cnt) {
                ++count;
            } else {
                std::cout << cnt << " count: " << count << std::endl;
                cnt = value;
                count = 1;
            }
        }
        std::cout << cnt << " count: " << count << std::endl;

    }
    return 0;
}