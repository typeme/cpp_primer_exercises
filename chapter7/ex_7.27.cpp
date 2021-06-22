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

    Screen& move(unsigned r, unsigned  c) {
        cursor = r * width + c;
        return *this;
    }

    Screen& set(char c) {
        contents[cursor] = c;
        return *this;
    }

    Screen& set(unsigned r, unsigned  c, char ch) {
        contents[r * width + c] = ch;
        return *this;
    }

    Screen& display(ostream &is) {
        is << contents << endl;
        return *this;
    }
};

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(cout);
    myScreen.display(cout);
}