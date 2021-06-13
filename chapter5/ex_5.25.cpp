#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    while(cin >> n1 >> n2) {
        try {
            if(n2 == 0) {
                throw runtime_error("除数不能为0");
            }
            cout << n1 / n2  << endl;
        }catch (runtime_error err) {
            cout << err.what() << endl;

        }
    }
    return 0;
}