#include <iostream>
#include <vector>
using namespace std;

int main() {
    int score = 88;
    cout << (score > 90 ? "high pass" : (score > 75 ? "pass" : (score > 60 ? "low pass" : "fail"))) << endl;
    return 0;
}