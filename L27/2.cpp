// cd L27 ; g++ -o L27 "2.cpp" ; ./L27.exe
#include <iostream>
#include <list>
#include <deque>
using namespace std;

//// List 
// int main() {
//     list<int> l;

//     l.push_back(1);
//     l.push_back(2);
//     l.push_front(3);
//     l.push_front(5);

//     for(int val : l) {
//         cout << val << " ";
//     }
//     cout << endl;

//     // cout << l[2] << endl;            // gives error as list can't be accessed fron any point 
//     return 0;
// }
// // size , erase , clear , begin , end , rbegin , rend , insert , front back also works in list


//// Deque : Double Ended Queue  
// int main() {
//     deque<int> d = {1,2,3};

//     d.push_back(4);
//     d.push_back(5);

//     for(int val : d) {
//         cout << val << " ";
//     }
//     cout << d[2] << endl;

//     return 0;
// }
// // size , erase , clear , begin , end , rbegin , rend , insert , front , back also works in deque