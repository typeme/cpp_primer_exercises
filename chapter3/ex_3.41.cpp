#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5};
    vector<int>vec(begin(a), end(a));

    for(auto a : vec)
        cout << a << " ";
    cout << endl;

}