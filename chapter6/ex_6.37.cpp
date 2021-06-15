#include <iostream>
#include <string>
using namespace std;
using strsp = string[3];

string a[3] = {"1", "2", "3"};
string (*strs)[3] = &a;

string(* funcOne(string (*strs)[3]))[3] {
    cout << "func one" << endl;
    return strs;
}

strsp* funcTwo(string (*strs)[3]) {
    cout << "func two" << endl;
    return strs;
}

auto funcThree(string (*strs)[3]) -> string(*)[3] {
    cout << "func three" << endl;
    return strs;
}

decltype(a) *funcFour(string(*strs)[3]) {
    cout << "func four" << endl;
    return strs;

}




int main() {
    funcOne(strs);
    funcTwo(strs);
    funcThree(strs);
    funcFour(strs);
    return 0;
}