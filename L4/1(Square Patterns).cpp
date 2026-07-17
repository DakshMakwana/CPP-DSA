// cd L4 ; g++ -o L4 "1(Square Patterns).cpp" ; ./L4.exe
#include <iostream>
using namespace std;

//// Square Pattern
// 1234
// 1234
// 1234 
// 1234

// int main() {
//     int n = 4;

//     for(int i=1 ; i<=n ; i++) {
//         for(int j=1 ; j<=n ; j++) {
//             cout << j ;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// ABCD
// ABCD
// ABCD
// ABCD
// int main() {
//     int n = 6;

//     for(int i=1 ; i<=n ; i++) {
//         char ch = 'A';
//         for(int j=1 ; j<=n ; j++) {
//             cout << ch ;
//             ch = ch + 1;
//         }
//         cout << endl;

//     }
//     return 0;
// }


// 1 2 3
// 4 5 6
// 7 8 9
int main() {
    int n = 3;

    int num = 1;

    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=n ; j++) {
            cout << num << " ";
            num++ ;
        }
        cout << endl;
    }

    return 0;
}