// cd L4 ; g++ -o L4 "3(Other Patterns).cpp" ; ./L4.exe

#include <iostream>
using namespace std;

//// Pyramid Pattern
//    1
//   121
//  12321
// 1234321

// int main() {
//     int n = 4;

//     for(int i = 0 ; i<n ; i++) {
//         for(int j = 0 ; j<(n-i-1) ; j++) {
//             cout << " " ;
//         }
//         for(int j = 1 ; j<=(i+1) ; j++) {
//             cout << j ;
//         }
//         for(int j = i ; j>=1 ; j--) {
//             cout << j ;
//         }
//         cout << endl;
//     }
//     return 0;
// }



//// Hollow Diamond Pattern
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// int main() {
//     int n = 4;

//     // Top Part
//     for(int i = 0 ; i<n ; i++) {

//         //spaces
//         for(int j = 0 ; j < (n-i-1) ; j++) {
//             cout << " ";
//         }

//         cout << '*';

//         //middle spaces
//         if(i != 0){
//             for(int j = 0 ; j < (2*i)-1 ; j++) {
//                 cout << " ";
//             }

//             cout << '*';

//         }
//         cout << endl;
//     }


//     // Bottom Part
//     for(int i = 0 ; i<(n-1) ; i++){

//         //spaces
//         for(int j = 0 ; j<(i+1) ; j++) {
//             cout << " ";
//         }

//         cout << '*';

//         //middle spaces
//         if(i != n-2){
//             for (int j = 0 ; j<(2*(n-i)-5) ; j++) {
//                 cout << " ";
//             }

//             cout << '*';

//         }
//         cout << endl;
//     }

//     return 0;
// }



//// Butterfly Pattern
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

int main() {
    int n = 4;

    // Top Part
    for(int i=0 ; i<n ; i++) {

        //initial stars
        for(int j=0 ; j<(i+1) ; j++) {
            cout << '*';
        }

        //middle spaces
        for(int j=0 ; j<2*(n-i-1) ; j++) {
            cout << " ";
        }

        //ending stars
        for(int j=0 ; j<(i+1) ; j++){
            cout << '*';
        }

        cout << endl;
      
    }

    // Bottom Part
    for(int i=0 ; i<n ; i++) {

        //initial stars
        for(int j=0 ; j<(n-i) ; j++) {
            cout << '*';
        }

        //middle spaces
        for(int j=0 ; j<(2*i) ; j++) {
            cout << " ";
        }

        //ending stars
        for(int j=0 ; j<(n-i) ; j++) {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}
