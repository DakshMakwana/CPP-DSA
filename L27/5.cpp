// cd L27 ; g++ -o L27 "5.cpp" ; ./L27.exe
#include <iostream>
#include <queue>
using namespace std;

// // Priority queue

// int main() {
//     priority_queue<int> q;                       // this is syntax to keep largest element at top

//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);

//     while (!q.empty()) {
//         cout << q.top() << " ";
//         q.pop();                                 // pop the biggest element
//     }
    
//     cout << endl;
//     return 0;
// }

// // reverse order
// int main() {
//     priority_queue<int , vector<int> , greater<int>> q;              // syntax to keep smallest element at top

//     q.push(5);
//     q.push(3);
//     q.push(10);
//     q.push(4);

//     while (!q.empty()) {
//         cout << q.top() << " ";
//         q.pop();                                 // pop the biggest element
//     }
    
//     cout << endl;
//     return 0;
// }

// push[O(log(n))] , emplace[O(log(n))] , top[O(1)] , pop[O(log(n))] , size , empty these all functions work in priority queue

// rest all STL push , emplace , top , pop  had TC = O(1)