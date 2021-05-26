#include <map>

#include <string>

#include <iostream>

using namespace std;

int main()

{

    map<string, string> mapStudent;

    mapStudent.insert(pair<string, string>("1", "student_one"));

    mapStudent.insert(pair<string, string>("2", "student_two"));

    mapStudent.insert(pair<string, string>("3", "student_three"));


//此处应注意，应该是 for(int nindex = 1; nindex <= nSize; nindex++)
//而不是 for(int nindex = 0; nindex < nSize; nindex++)


        cout<<mapStudent["1"]<<endl;
    cout<<mapStudent["2"]<<endl;
    cout<<mapStudent["3"]<<endl;

}