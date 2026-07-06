// cd L3 ; g++ -o L3 "1(Conditional Statement).cpp" ; ./L3.exe
#include <iostream>
using namespace std;


//// if-else

// int main(){
//     int n = -45;
//     if(n >= 0){
//         cout << "positive" << endl;
//     }else {
//         cout << "negative" << endl;
//     }
//     return 0;
// }


//// if- else if -else

// int main(){
//     int marks;
//     cout << "Enter Your Score : ";
//     cin >> marks;

//     if(marks >= 90){
//         cout << "Grade : A" << endl;
//     }else if(marks >= 80 && marks < 90){
//         cout << "Grade : B" << endl;
//     }else {
//         cout << "Grade : C" << endl;
//     }

//     return 0;
// }


//// Ternary Statement

int main(){
    int n;
    cout << "enter no. : ";
    cin >> n;

    cout << (n >= 0 ? "Positive" :"Negative") << endl;
    return 0;
}