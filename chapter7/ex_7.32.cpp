#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Screen;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);

    vector<Screen> screens;
};


class Screen {
    friend  void Window_mgr::clear(ScreenIndex);
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

    Screen &move(unsigned r, unsigned  c) {
        cursor = r * width + c;
        return *this;
    }

    Screen &set(char c) {
        contents[cursor] = c;
        return *this;
    }

    Screen &set(unsigned r, unsigned  c, char ch) {
        contents[r * width + c] = ch;
        return *this;
    }

    Screen &display(ostream &is) {
        is << contents << endl;
        return *this;
    }
};


void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4,0).set('#').display(cout);
    myScreen.display(cout);
    Window_mgr w;
    w.screens.push_back(myScreen);
    w.clear(0);
    myScreen.display(cout);
    w.screens[0].display(cout);
}