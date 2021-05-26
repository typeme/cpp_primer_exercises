#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5};

    for(int* i = begin(a); i < end(a); i++)
        *i = 0;

    for(auto i : a)
        cout << i << " ";
    cout << endl;

}