#include <iostream>
#include <vector>
using namespace std;

int f1(int a, int b) {
    return a + b;
}
int f2(int a, int b) {
    return a - b;
}
int f3(int a, int b) {
    return a * b;
}
int f4(int a, int b) {
    return a / b;
}

int main(){
    vector<int (*) (int, int) >vec;

    vec.push_back(f1);
    vec.push_back(f2);
    vec.push_back(f3);
    vec.push_back(f4);
    int a = 4, b = 2;

    for(auto f : vec) {
        cout << f(a,b) << endl;
    }

    return 0;
}