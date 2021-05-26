#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str;
    getline(cin, str);
    for(decltype(str.size()) i; i < str.size(); i++) {
        str[i] = 'X';
    }
    cout << str << endl;

    for(auto &c : str)
        c = 'Y';
    cout << str << endl;
}