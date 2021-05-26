#include <iostream>
#include <string>
using  std::string;
using  std::cin;
using  std::cout;
using  std::endl;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    cout << "compare value" << endl;
    if(str1 != str2) {
        if(str1 > str2)
            cout << str1 << endl;
        else if(str1 < str2)
            cout << str2 << endl;
    }
    else
        cout << "str1 equals to str2" << endl;

    cout << "compare length" << endl;

    if(str1.size() != str2.size()) {
        if(str1.size() > str2.size())
            cout << str1 << endl;
        else if(str1.size() < str2.size())
            cout << str2 << endl;
    }
    else
        cout << "str1 is as long as str2" << endl;
}