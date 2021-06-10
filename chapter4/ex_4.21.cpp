#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    for(auto &a : v) {
        a % 2 == 0 ? (a = a) : (a *= 2);
        cout << a << " ";
    }
    cout << endl;
}