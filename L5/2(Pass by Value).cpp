// cd L5 ; g++ -o L5 "2(Pass by Value).cpp" ; ./L5.exe

#include <iostream>
using namespace std;

//// Pass by value :- copy of argument is passed to function


// int sum(int a , int b) {
//     return a+b;                        // the a and b are the variable in this function
// }

// int main() {
//     int a = 5 , b = 4;                 // this are the variable of this main function but they are used to pass argument in sum function
//     cout << sum(a,b) << endl;
//     return 0;
// }


// Calculate the sum of digits of a no. 

// int sumOfDigits(int n) {
//     int digitSum = 0;

//     while(n>0){
//         int lastDigit = n%10;
//         n /= 10;
//         digitSum += lastDigit;
//     }
//     return digitSum;
// }

// int main(){
//     cout << sumOfDigits(345) << endl;
//     return 0;
// }


// Calculate nCr binomial coefficient for n & r
// nCr = n!/(r!*(n-r)!)

int Factorial(int n) {
    int fact = 1;

    for(int i=1 ; i<=n ; i++) {
        fact *= i;
    }
    return fact;
}

int nCr_Calc(int n, int r) {
    int Fact_n = Factorial(n);
    int Fact_r = Factorial(r);
    int Fact_nr = Factorial(n-r);

    int nCr = Fact_n/(Fact_r*Fact_nr);

    return nCr;
}

int main() {
    cout << nCr_Calc(8,2) << endl;
    return 0;
}