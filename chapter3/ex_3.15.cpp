#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> stack;
    string a;
    while(cin >> a)
        stack.push_back(a);
    for(auto a : stack)
        cout << a << " ";
    cout << endl;
}