// // DATA TYPES  [Primitive DT]
// 1. int - integer             [4 bytes]
// 2. char - abcd               [1 byte]
// 3. float - decimal value     [4 bytes]
// 4. bool - True or False      [1 bytes]
// 5. double - decimal value     [8 bytes]


//// Some imp size conversion
// bit = 1
// 8 bits = 1 byte


//// we can print the size of data 
#include <iostream>
using namespace std;

int main(){
    int age = 25;
    cout << sizeof(age) << endl;
    return 0;
}