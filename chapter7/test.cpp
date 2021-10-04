#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A{
public:
    void test() const {
        cout << "123" << endl;
    }
    void test1() {
        cout << "456" << endl;
    
    }
};

int main() {
    A a;
    const A b;
    a.test();
    a.test1();
    b.test();
//    b.test1();
    return 0;
}
