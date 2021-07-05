#include <iostream>
#include <string>
using namespace std;

class Screen {
private:
    unsigned height = 0;
    unsigned width = 0;
    unsigned cursor = 0;
    string contents;

public:
    Screen() = default;
    Screen(unsigned h, unsigned  w) : height(h), width(w), contents(h * w, ' '){}
    Screen(unsigned h, unsigned  w, char c) : height(h), width(w), contents(h * w, c) {}
    void print(){cout << contents << endl;}
};

int main() {
    Screen sc = Screen(10, 10, 'a');
    sc.print();
}