#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x[10];
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;

    return 0;
}