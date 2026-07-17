// cd L7 ; g++ -o L7 "1(Binary Operators).cpp" ; ./L7.exe
#include <iostream>
using namespace std;

//// Bitwise operator
// // & :- this operates as (0,0 = 0) (0,1 = 0) (1,0 = 0) (1,1 = 1)
// // | :- this operates as (0,0 = 0) (0,1 = 1) (1,0 = 1) (1,1 = 1)
// // ^ :- this operates as (0,0 = 1) (0,1 = 0) (1,0 = 0) (1,1 = 1)

// int main() {
//     int a=6 , b=4;

//     cout << "& : " << (a & b) << endl;
//     cout << "| : " << (a | b) << endl;
//     cout << "^ : " << (a ^ b) << endl;
//     return 0;
// }



// << :- (n<<i) 'i' no. of zeros are added in end of binary no. of 'n'
// >> :- (n>>i) 'i' no. of no. of values are removed from the end of binary no. of 'n'

int main() {
    int n=4 , i=1;
    
    cout << (n << i) << endl;
    cout << (n >> i) << endl;
    return 0;
}