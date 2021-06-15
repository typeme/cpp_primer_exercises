#include <iostream>
using namespace std;

int sum(initializer_list<int> list) {
    int sum = 0;
    for(auto a : list)
        sum += a;
    return sum;
}

int main() {
    cout << sum({1,2,3,4,5,6,7}) << endl;
    return 0;
}