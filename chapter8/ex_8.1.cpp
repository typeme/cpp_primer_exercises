#include <iostream>

std::istream& ReadFromStream(std::istream& is) {
    std::string word;
    while(is >> word && !is.eof()) {
        std::cout << word;
    }
    is.clear();
    return is;
}

int main() {
    ReadFromStream(std::cin);
    return 0;

}