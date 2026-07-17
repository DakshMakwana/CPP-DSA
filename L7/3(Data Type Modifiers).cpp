// cd L7 ; g++ -o L7 "3(Data Type Modifiers).cpp" ; ./L7.exe
#include <iostream>
using namespace std;

//// Data Type modifiers :- change meaning of data types




// int main() {
//     cout << sizeof(int) << endl;
//     cout << sizeof(long int) << endl;
//     cout << sizeof(short int) << endl;
//     cout << sizeof(long long int) << endl;
//     return 0;
// }


//// signed & unsigned
int main(){
    unsigned int x = -10;
    cout << x << endl;                        // the system seen it as positive no. so was the terminal
    return 0;
}