#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a[] = {1,2,3,4};
    int b[] = {1,2,3,4};
    vector<int>va, vb;

    if(sizeof(a)/sizeof(a[0]) != sizeof(b)/sizeof(b[0]))
        cout << "two arrays are different" <<endl;
    for(size_t i; i < 4; i++) {
        va.push_back(i);
        vb.push_back(i);
        if(a[i] != b[i]) {
            cout << "two arrays are different" << endl;
            break;
        }
    }

    if(va.size() != vb.size())
        cout << "two vectors are different" << endl;

    for(auto i = 0; i < va.size(); i++) {
        if(va[i] != vb[i]) {
            cout << "two vectors are different" << endl;
            break;
        }
    }

    return 0;
}