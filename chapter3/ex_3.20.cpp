#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    vector<int> stack;
    while(cin >> a)
    {
        stack.push_back(a);
    }
    if(stack.empty())
    {
        cout << "number does not exist" << endl;
        return 0;
    }


    cout << "sum form left to right" << endl;

    for(decltype(stack.size()) i = 0; i < stack.size(); )
    {
        cout << stack[i] + stack[i+1] << " ";
        i += 2;
    }
    if(stack.size() % 2 != 0)
        cout << stack[stack.size()-1];
    cout << endl;

    cout << "sum left and right to middle" << endl;


    decltype(stack.size()) left = 0, right = stack.size() - 1;
    while(left < right)
    {
        cout << stack[left] + stack[right] << " ";
        left++;
        right--;
    }

    if(stack.size() % 2 != 0)
        cout << stack[left];
    cout << endl;
    return 0;

}