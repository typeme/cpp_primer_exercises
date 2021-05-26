#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a (10, 42);
    vector<int> b {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> c;
    for(int i = 0; i < 10; i++)
        c.push_back(42);

    for(auto c : a)
        cout << c << " ";
        cout << endl;

    for(auto c : b)
        cout << c << " ";
    cout << endl;

    for(auto c : b)
        cout << c << " ";
    cout << endl;
}