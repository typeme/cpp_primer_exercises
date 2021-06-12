#include <iostream>
using namespace std;

int main() {
    string s;
    string prev = "";
    int num = 1;
    int max = 0;
    while(cin >> s) {
        if(prev == "") {
            prev = s;
            continue;
        }
        if(prev == s) {
            num++;
        }else {
            prev = s;
            num = 1;
        }

        max = max > num ? max : num;

    }
    if(max == 1)
        cout << "doesn't exist continue words";
    else
        cout << max << endl;
    return 0;
}