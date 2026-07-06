// cd L3 ; g++ -o L3 "2(Loops).cpp" ; ./L3.exe
#include <iostream>
using namespace std;


//// While Loop

// int main(){                         //To print no. 1 to 5
//     int count = 1;

//     while(count <= 5){
//         cout << count << endl;
//         count++ ;
//     }
//     return 0;
// }


//// For Loop

// int main(){
//     for(int i = 1 ; i <= 10 ; i += 2){
//         cout << i;
//     }
//     cout << endl;
//     return 0;
// }


//// do while Loop                      

// int main(){                            // This loop will run atleast 1 time even if condition was not satisfied
//     int n = 10;
//     int i = 1;

//     do {
//         cout << i << " ";
//         i++ ;
//     } while(i>=n);

//     cout << endl;
//     return 0;
// }


//// nested loops

int main() {
    for (int i=1 ; i<5 ; i++){
        int m = 10;
        for(int j=1 ; j<=m ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}