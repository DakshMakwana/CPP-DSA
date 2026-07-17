// cd L7 ; g++ -o L7 "4(HomeWork).cpp" ; ./L7.exe

#include <iostream>
using namespace std;


//// Figure out how to find a number is power of 2 without any loop.
int main() {
    int n;
    cout << "enter a no. : ";
    cin >> n;

    if (n > 0 && (n & (n-1)) == 0){
        cout << "Power of 2";
    } else {
        cout << "not a power of 2";
    }
    return 0;
}


//// WAF to reverse an integer n.
// i found logic of this code 