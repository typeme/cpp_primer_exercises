#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int>vec(5,1);
    int a[vec.size()];
    for(int i = 0; i < vec.size(); i++) {
        a[i] = vec[i];
        cout << a[i] << " " ;t
    }
    cout << endl;


}