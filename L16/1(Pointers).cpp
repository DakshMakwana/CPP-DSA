// cd L16 ; g++ -o L16 "1(Pointers).cpp" ; ./L16.exe
#include <iostream>
using namespace std;

// Pointer :- special variables that store address of other variables

// int main() {
//     int a = 10;
//     int* ptr = &a;           // it stores the address of 'a' in memory    
//     cout << ptr << endl;
//     cout << &a << endl;
//     cout << &ptr << endl;
//     return 0;
// }

// Pointer to pointer
// int main() {
//     int a = 10;
//     int* ptr = &a;
//     int** prt2 = &ptr;                         // It stores the address of 'ptr'

//     cout << &a << endl;
//     cout << ptr << endl;
//     cout << &ptr << endl;
//     cout << prt2 << endl;
//     return 0;
// }

// Dereferance operator(*)
// int main() {
//     int a = 10;
//     int* ptr = &a;

//     cout << *(&a) << endl;               // return value stored at the address
//     cout << *(ptr) << endl;
//     return 0;
// }

// Null pointer
// int main() {
//     int* ptr1;
//     int* ptr2 = NULL;

//     cout << ptr1 << endl;               // stores random address
//     cout << ptr2 << endl;               // stores 0 so that we know it was a null pointer

//     return 0;
// }

// int main() {
//     int a = 5;
//     int *p = &a;
//     int **q = &p;

//     cout << *p << endl;                // return a
//     cout << **q << endl;               // return a
//     cout << p << endl;                 // return &a
//     cout << *q << endl;                // return p
//     return 0;
// }


//// Pass by reference

// 1) Through pointer
// void changeA(int* ptr) {
//     *ptr = 20;
// }

// int main() {
//     int a = 10;
    
//     changeA(&a);
//     cout << "a = " << a << endl;
//     return 0;
// }

// 2) References thorugh alias
// void changeA(int &ptr) {
//     ptr = 20;
// }

// int main() {
//     int a = 10;
    
//     changeA(a);
//     cout << "a = " << a << endl;
//     return 0;
// }


//// Array pointer
// int main() {
//     int arr[] = {1,2,3,4,5};

//     cout << *arr << endl;                        // returns value stored at zeroth index 
//     cout << *(arr+1) << endl;                    // returns value stored at first index
//     cout << *(arr+2) << endl;                    // returns value stored at second index
//     cout << *(arr+3) << endl;                    // returns value stored at third index
//     return 0;
// }


//// Pointer arithmetic

// 1) Increment(++) / Decrement(--) :- increses the value of address in pointer by size of one data stored in pointer 
// int main(){
//     int a = 10;
//     int* ptr = &a;

//     cout << ptr << endl;
//     ptr++;
//     cout << ptr << endl;               // 4 bits more
//     return 0;
// }


// 2) Add / Subtract Number
// int main(){
//     int a = 10;
//     int* ptr = &a;

//     cout << ptr << endl;
//     ptr = ptr + 2;
//     cout << ptr << endl;               // 8 bits more
//     return 0;
// }


// 3) Subtract ptr
// int main() {
//     int* ptr2 ;
//     int* ptr1 = ptr2 + 2;

//     cout << ptr1-ptr2 << endl;        // 2
//     return 0;
// }


// 4) Compare (< , <= , > , >= , == , !=)
// int main() {
//     int* ptr1;
//     int* ptr2;
    
//     cout << ptr1 << "\n" << ptr2 << endl;

//     cout << (ptr1 > ptr2) << endl;               // 1 means true & 0 means false
//     return 0;
// }


// Gyaan from question
int main() {
    int arr[] = {10,20,30,40};
    int* ptr = arr;

    cout << *(ptr+1) << endl;
    cout << *(ptr+3) << endl;
    ptr++ ;
    cout << *(ptr) << endl;
    
    return 0;
}