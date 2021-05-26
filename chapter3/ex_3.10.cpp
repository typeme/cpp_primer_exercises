#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str1, str2;
    getline(cin, str1);
    for(auto c : str1)
        if(!ispunct(c))
            str2 += c;

    cout << str2 << endl;
}