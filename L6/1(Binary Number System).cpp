// cd L6 ; g++ -o L6 "1(Binary Number System).cpp" ; ./L6.exe

#include <iostream>
using namespace std;


//// Decimal to Binary 
// int decToBinary(int decNum) {
//     int ans = 0 , pow = 1;
    
//     while(decNum > 0) {
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;
// }

// int main() {
//     cout << decToBinary(42);
//     return 0;
// }



//// Binary to Decimal
int BinToDec(int binNum) {
    int ans = 0 , pow = 1;

    while(binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow ;

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main() {
    cout << BinToDec(110010) << endl;
    return 0;
}