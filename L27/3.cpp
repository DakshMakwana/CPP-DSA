// cd L27 ; g++ -o L27 "3.cpp" ; ./L27.exe
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

// List
// int main() {

//     pair<int,int> p = {3,5};
//     cout << p.first << endl;
//     cout << p.second << endl;

//     pair<int,char> q = {7,'a'};
//     cout << q.first << endl;
//     cout << q.second << endl;

//     return 0;
// }


// // list in list
// int main() {
//     pair<int,pair<int,char>> p = {1 , {'a',3}};

//     cout << p.first << endl;
//     cout << p.second.first << endl;

//     return 0;
// }


//// list in vector
int main() {
    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    vec.push_back({4,5});                   // had to write in same data type otherwise gives error
    vec.emplace_back(5,6);                  //change the type and create in-place objects

    for(pair<int,int> p: vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}