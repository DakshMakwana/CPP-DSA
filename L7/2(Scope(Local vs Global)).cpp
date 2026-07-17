// cd L7 ; g++ -o L7 "2(Scope(Local vs Global)).cpp" ; ./L7.exe
#include <iostream>
using namespace std;

// Scope :- usability of variable

// Local 
// int main() {
//     if (3<1) {

//     }else {
//         int x=10;
//     }

//     cout << x << endl;                            // it gives error as x is local variable of if statement and is not defined outside the statement
//     return 0;
// }


// Global
int main() {
    int x=10;                                        // this Global variable it works both inside and outside of the statement

    if (3<1) {

    }else {
        cout << "Inside the statement " << x << endl;
    }

    cout << "Outside the statement " << x << endl;
    return 0;
}