// cd L4 ; g++ -o L4 "2(Triangle Pattern).cpp" ; ./L4.exe
#include <iostream>
using namespace std;

//// Triangle Pattern


// *
// **
// ***
// ****
// int main() {
//     int n = 4;

//     for(int i = 1 ; i<=n ; i++) {
//         for(int j = 1 ; j<=i ; j++) {
//             cout << '*';
//         }
//         cout << endl;
//     }

//     return 0;
// }


// 1
// 22
// 333
// 4444
// int main() {
//     int n = 4;

//     for(int i = 1 ; i<=n ; i++) {
//         for(int j = 1 ; j<=i ; j++) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// 1
// 12
// 123
// 1234
// int main() {
//     int n = 4;

//     for(int i = 1 ; i<=n ; i++) {
//         for(int j = 1 ; j<=i ; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



//// Reverse triangle pattern

// 1
// 21
// 321
// 4321

// int main() {
//     int n = 4;

//     for(int i = 1 ; i<=n ; i++) {
//         for(int j = i ; j>=1 ; j--) {
//             cout << j << " ";        
//         }
//         cout << endl;
//     }

//     return 0;
// }



//// Floyd's Triange Pattern

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// int main() {
//     int n = 4;
//     int num = 1;

//     for(int i = 1 ; i<=n ; i++) {
//         for(int j = 1 ; j<=i ; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }



//// Inverted Triangle Pattern

// 1111
//  222
//   33
//    4

// int main() {
//     int n = 4;

//     for(int i = 0 ; i<=(n-1) ; i++) {
//         for(int j = 0 ; j<i ; j++){
//             cout << " ";
//         }
//         for (int k = 0 ; k<(n-i) ; k++) {
//             cout << i+1;
//         }
//         cout << endl;
//     }

//     return 0;
// }