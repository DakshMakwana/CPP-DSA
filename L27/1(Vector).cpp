// cd L27 ; g++ -o L27 "1(Vector).cpp" ; ./L27.exe
#include <iostream>
#include <vector>
using namespace std;

//// C++ STL :- Standard Template library

// Vector

//// Representations of vector

// int main() {
//     vector<int> vec1 = {2,4,6,8,10};             // all elelment inside the bracket
//     vector<int> vec2 (3,10);                     // 3 elements with the value of 10
//     vector<int> vec3(vec1);                      // contains all elements of vec1
//     return 0;
// }


//// Functions (TC = O(1))

//// 1) Push Back & size/capacity
// int main() {
//     vector<int> vec;

//     vec.push_back(1);                         // assumed enter data to be same type
//     vec.push_back(2);
//     vec.push_back(3);
//     cout << "Size : " << vec.size() << endl;               // 3
//     cout << "Capacity : " << vec.capacity() << endl;       // 4

//     return 0;
// }

//// 2) Emblace_back
// int main() {
//     vector<int> vec;

//     vec.emplace_back(6);                         // emplace the data . We will learn about it later

    
//     return 0;
// }

//// 3) Pop back 
// int main() {
//     vector<int> vec = {2,3,54,63,8};

//     vec.pop_back();                              // delete last element     
//     return 0;
// }

//// 4) at() or []
// int main() {
//     vector<int> vec = {2,3,54,63,8};

//     cout << vec[3] << endl;                      // print element at 3rd index (4th element)
//     cout << vec.at(2) << endl;                   // print element at 2nd index (3rd element)
//     return 0;
// }

//// 5) front & back
// int main() {
//     vector<int> vec = {2,5,8,56};

//     cout << vec.front() << endl;
//     cout << vec.back() << endl;
//     return 0;
// }

//// 6) erase , insert           // TC = O(n)
// int main() {
//     vector<int> vec = {1,2,3,4,5,6,7,8};

//     vec.erase(vec.begin()+2);                    // had to pass pointer in it . this erases 3rd element
//     vec.erase(vec.begin()+1 , vec.begin()+4);    // delete the elements from 1st to 4th element  

//     vec.insert(vec.begin()+2 , 100);             // add a element of value 100 at index 2   
//     return 0;
// }

//// 7) clear , empty
// int main() {
//     vector<int> vec = {1,2,3,4,5,6,7,8};

//     vec.clear();                                 // clears whole vector capacity remains same
//     cout << "is empty : " << vec.empty() <<endl; // check the vec is empty(1) or not(0) 

//     return 0;
// }



//// iterator 

int main() {
    vector<int> vec = {1,2,3,4,5};

    vector<int>::iterator it;

    // forward iterator
    for(it = vec.begin() ; it != vec.end() ; it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // backward iterator
    for(auto it = vec.rbegin() ; it != vec.rend() ; it++) {          // when we use auto the c++ identify the data type automatically
        cout << *(it) << " ";
    }
    cout << endl;
    
    return 0;
}






//// Vector iterators
// 1) vec.begin()                                  // point at index 1
// 2) vec.end()                                    // dosen't point at last index it points at index after last index
// int main() {
//     vector<int> vec = {1,2,3,4,5,6,7,8};

//     cout << *(vec.begin()) << endl;              // prints first element 
//     cout << *(vec.end()) << endl;                // prints element after last elelment so it return random garbage data

//     return 0;
// }

//// rev iterators for vector
