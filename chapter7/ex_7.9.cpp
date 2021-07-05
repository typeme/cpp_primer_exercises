#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    string address;

    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

};

ostream &print( ostream &os, const Person &per) {
    os << per.getName() << per.getAddress();
    return os;
}

istream &read( istream &is, Person &per) {
    is >> per.name >> per.address;
    return is;
}

int main() {
    Person ps = Person();
    read(cin, ps);
    print(cout, ps);
    return 0;
}