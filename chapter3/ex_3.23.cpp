#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> stack(10, 1);
    for(vector<int>::iterator itr = stack.begin(); itr != stack.end(); itr++) {
        *itr *= 2;
        cout << *itr << " ";
    }
    cout << endl;

}