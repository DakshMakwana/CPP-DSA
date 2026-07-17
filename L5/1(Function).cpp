// cd L5 ; g++ -o L5 "1(Function).cpp" ; ./L5.exe

#include <iostream>
using namespace std;

int printHello() {                  // This is a function 
    cout << "hello\n";
    return 3;
}


int main() {
    cout << printHello() << endl;        // Call for function
    return 0;
}


//// Parameters

// int sum(int a , int b){
//     int s = a+b;
//     return s;
// }

// int main() {
//     cout << sum(10,5) << endl;
//     return 0;
// }


// min. of two
// int min(int a , int b) {
//     if(a>b) {
//         return b;
//     }else {
//         return a;
//     }
// }

// int main() {
//     cout << min(3,6) << endl;

//     return 0;
// }


// Calculate sum of numbers from 1 to N.
// int sumN(int n) {
//     int sum = 0;

//     for(int i=1 ; i<=n ; i++) {
//         sum += i;
//     }

//     return sum;
// }

// int main() {
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }


// Calculate N factorial
// int Factorial(int n) {
//     int fact = 1;

//     for(int i=1 ; i<=n ; i++) {
//         fact *= i;
//     }
//     return fact;
// }


// int main() {
//     cout << Factorial(4) << endl;
//     cout << Factorial(5) << endl;
//     return 0;
// }



//// Function in Memory :- function is stored in stack memory one by one