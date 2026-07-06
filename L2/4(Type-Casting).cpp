// conversion - implicit(compiler do it automatically) [smaller to bigger data type]
// casting - explicit(we had to do it) [bigger to smaller data type]


#include <iostream>
using namespace std;

//// conversion
// int main(){
//     char grade = 'A';
//     int value = grade;                        // the value become 65
//     cout << value << endl;
//     return 0;
// }


// Casting
int main(){
    double price = 100.99;
    int newprice = (int)price;                   // the new price become 100 
    cout << newprice << endl;
    return 0;
}