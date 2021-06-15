#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int>vec, unsigned index) {
    unsigned size = vec.size();
    if(!vec.empty() && index < size) {
        cout << vec[index] << " ";
        print_vector(vec, ++index);
    }
}

int main() {
    print_vector({1,2,3,4}, 0);
    return 0;
}