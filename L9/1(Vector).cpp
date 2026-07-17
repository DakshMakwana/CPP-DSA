// cd L9 ; g++ -o L9 "1(Vector).cpp" ; ./L9.exe
#include <iostream>
#include <vector>
using namespace std;

//// vector :- it is a data structure like array but dynamic in nature
// syntax :- 1) vector<int>vec;    2) vector<int>vec = {1,2,3}    3) vector<int>vec(3,0)

// int main() {
//     vector<int> vec2 = {1,2,3};
//     vector<int> vec3(3,6);                                 // 3 no. with value of 6
//     cout << vec2[1] << ' '; 
//     cout << vec3[2] << ' ';
//     return 0;
// }


//// for each loop
// int main() {
//     vector<char> vec = {'a','b','c','d','e','f','g'};

    // for(char i : vec) {
    //     cout << i << " ";
    // }
    // cout << endl;

//     return 0;
// }


//// vector functions

// 1) size
// int main() {
//     vector<int> vec = {2,4,5,7,8};
//     cout << "size = " << vec.size() << endl;               // return no. of values stored inside the vector

//     return 0;
// }

// 2) push_back
// int main() {
//     vector<int> vec;
//     vec.push_back(25);                                     // push an value at the end of vector
//     cout << vec[0] << endl;
//     return 0;
// }

// 3) pop_back
// int main() {
//     vector<int> vec = {2,4,5,7,8};
//     vec.pop_back();                                        // pop the last value in a vector
//     for(int i : vec) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

// 4) front & back
// int main() {
//     vector<int> vec = {2,4,5,7,8};
//     cout << vec.front() << endl;                           // return first value (2)
//     cout << vec.back() << endl;                            // return last value (8)
//     return 0;
// }

// 5) at
// int main() {
//     vector<int> vec = {2,4,5,7,8};
//     cout << vec.at(2) << endl;                             // return the value at int 2
//     return 0;
// }


//// dynamic allocation   [capacity :- when we add new values vectors capacity get doubled]
// int main() {
//     vector<int> vec ;
//     vec.push_back(2);
//     vec.push_back(5);
//     vec.push_back(8);

//     cout << vec.size() << endl;                            // no. of values stored (3)
//     cout << vec.capacity() << endl;                        // no. of values can be stored (4)
//     return 0;
// }