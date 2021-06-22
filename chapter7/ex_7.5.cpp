#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    string address;

public:
    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }
};


int main() {
    return 0;
}