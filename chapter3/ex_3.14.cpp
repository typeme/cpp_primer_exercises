#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> stack;
    int a;
    while(cin >> a)
        stack.push_back(a);
    for(auto a : stack)
        cout << a << " ";
    cout << endl;
}