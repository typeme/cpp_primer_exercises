#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a[10];
    for(size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        a[i] = i;
    }
    for(auto i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}