#include <iostream>
#include <string>
using namespace std;

inline bool isShorter(const string &str1, const string &str2) {
    return str1.size() < str2.size();
}

int main() {
    string s1 = "123";
    string s2 = "1234";
    if(isShorter(s1, s2))
        cout << "s1 is shorter" << endl;
    else
        cout << "s2 is shorter" << endl;
    return 0;
}