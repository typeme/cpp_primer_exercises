#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    vector<string> stack;
    while(cin >> str)
        stack.push_back(str);
    for(auto &str : stack) {
        for (auto &c : str)
            c = toupper(c);
        cout << str << endl;
    }
}