#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for(string::iterator itr = str.begin(); itr != str.end() && *itr != ' '; itr++) {
        *itr = toupper(*itr);
    }

    cout << str << endl;
    return 0;
}