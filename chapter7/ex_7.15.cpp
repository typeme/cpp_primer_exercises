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

    Person() = default;
    Person(string n, string a): name(n), address(a) {}
//    Person(istream &is) {is >> *this;}

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
//    Person(cin) ps;
//    read(cin, ps);
    Person ps = Person("123", "143");
    print(cout, ps);
    return 0;
}