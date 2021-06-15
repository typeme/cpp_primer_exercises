#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> vec, int index) {
    #ifndef NDEBUG
        cerr << __func__ << "vector size is " << vec.size() <<endl;
    #endif
    if(index >= vec.size())
        return ;
    cout << vec[index++] << " ";
    print_vector(vec, index);


}

int main() {
    vector<int> vec =  {1,2,3,4};
    print_vector(vec, 0);
    return 0;
}