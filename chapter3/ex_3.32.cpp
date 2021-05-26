#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a[10];
    int b[10];
    vector<int> v1;
    vector<int> v2;
    for(size_t i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        a[i] = i;
        b[i] = a[i];
        v1.push_back(i);
    }
    v2 = v1;

    for(auto i : b)
        cout << i << " ";
    cout << endl;

    for(auto i : v2)
        cout << i << " ";
    cout << endl;
    return 0;
}