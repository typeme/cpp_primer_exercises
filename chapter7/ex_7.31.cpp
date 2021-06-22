#include <iostream>
using namespace std;
class Y;
class X{
    Y *p;
};

class Y{
    X x;
};

int main() {
    return 0;
}