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
    decltype(str.size()) i = 0;
    while(i < str.size())
        str[i++] = 'X';

    cout << str << endl;
}