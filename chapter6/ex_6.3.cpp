#include <iostream>
using namespace std;

int fact(int num) {
    if(num == 1)
        return num;
    return num * fact(num -1);
}

int main() {
    int num;
    while(cin >> num) {
        cout << fact(num) << endl;
    }
    return 0;
}