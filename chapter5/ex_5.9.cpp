#include <iostream>
using namespace std;

int main() {
    char c;
    int num = 0;
    while(cin >> c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'  )
            num++;
    }
     cout << num << endl;

    return 0;
}