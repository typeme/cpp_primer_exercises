#include <iostream>
using namespace std;

int count() {
    static int count = 0;
    return count++;

}

int main() {
    for(int i = 0; i < 10; i++) {
        cout << count() << endl;
    }
    return 0;
}