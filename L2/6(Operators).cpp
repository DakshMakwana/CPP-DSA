#include <iostream>
using namespace std;


// Arithmetic Operators [-> +,-,/,*,%]

// int main(){
//     int a = 10 , b = 5;
//     cout << "sum = " << (a+b) << endl;
//     cout << "difference = " << (a-b) << endl;
//     cout << "product = " << (a*b) << endl;
//     cout << "division = " << (a/b) << endl;
//     cout << "remainder = " << (a%b) << endl;
//     return 0;
// }


//// In this case it print an integer 2 not 2.5
// int main(){
//     int a = 5 , b = 2;
//     cout << "division = " << (a/b) << endl;
//     return 0;
// }

//// To solve this we had to enter any one value as float or double
// int main(){
//     int a = 5;
//     double b = 2;
//     cout << "division = " << (a/b) << endl;
//     return 0;
// }

//// The best approach is 
// int main(){
//     int a = 5 , b = 2;
//     cout << "division = " << (a/(double)b) << endl;         // through type-casting
//     return 0;
// }


//// Relational Operators [<,>,<=,>=,==,!=] (returns true or false)

// int main(){
//     cout << (3 < 5) << endl;          // true and false is 1 and 0 respectively 
//     return 0;
// }


//// Logical Operators [OR(||)  AND(&&)  NOT(!)]

// int main(){
//     cout << !(3 < 5) << endl;
//     return 0;
// }

// int main(){
//     cout << ((3 < 5) || (1 > 4)) << endl;               // needs atleast 1 true statement to be true 
//     return 0;
// }

// int main(){
//     cout << ((3 < 5) && (1 > 4)) << endl;                  // needs all statements true to be true
//     return 0;
// }


//// Unary Operators [++ and --] (ye variable ki value 1 se increase ya decrease karega)

//// a++ (post increment) 
// int main(){
//     int a =10;
//     int b = a++;                       // Pehle 'a' ki value 'b' mai store hoga then 'a' update hoga
//     cout << "b : " << b << endl;       // Pehle hi 'a' ki value b mai chale gai thi to b=10 hi hoga
//     cout << "a : " << a << endl;       // 'a' ki value update hochuki h so a=11
//     return 0;
// }

//// ++a (pre increment)
int main(){
    int a =10;
    int b = ++a;                       // Pehle 'a' update hoga then 'b' mai value store hogi
    
    cout << "b : " << b << endl;       // 'a' update ho kr 'b' mai store hoga so b=11
    cout << "a : " << a << endl;       // 'a' ki value pehle hi update ho chuki h isiliye a=11
    return 0;
}