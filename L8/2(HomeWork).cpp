// cd L8 ; g++ -o L8 "2(HomeWork).cpp" ; ./L8.exe
#include <iostream>
#include <climits>
#include <vector>
using namespace std;


//// WAF to calculate sum & product of all no. in an array

// void array_calc(int arr[] , int sz) {
//     int sum = 0;
//     int product = 1;

//     for (int i=0 ; i<sz ; i++) {
//         sum = sum + arr[i];
//         product = product * arr[i];
//     }

//     cout << "sum : " << sum << endl;
//     cout << "product : " << product << endl;
// }

// int main() {
//     int sz = 5 ;
//     int arr[sz] ;
//     cout << "enter 5 no. : ";

//     for (int i=0 ; i<sz ; i++){
//         cin >> arr[i] ;
//     }

//     array_calc(arr , sz) ;

//     return 0 ;
// }



//// WAF to swap max. and min. no. of an array

// void swap_max_min(int arr[] , int sz) {
//     int min = INT_MAX;
//     int min_index = 0;

//     int max = INT_MIN;
//     int max_index = 0;

//     for (int i=0 ; i<sz ; i++) {
//         if (min > arr[i]){
//             min = arr[i];
//             min_index = i ;
//         } if(max < arr[i]){
//             max = arr[i];
//             max_index = i ;
//         }
//     }

//     swap(arr[max_index] , arr[min_index]);

//     cout << "The array will be : " ;
//     for(int i=0 ; i<sz ; i++) {
//         cout << arr[i] << " " ;
//     }
//     cout << endl;
// }

// int main() {
//     int sz = 5 ;
//     int arr[sz] ;
//     cout << "enter 5 no. : ";

//     for (int i=0 ; i<sz ; i++){
//         cin >> arr[i] ;
//     }

//     swap_max_min(arr , sz) ;
//     return 0 ;
// }



//// WAF to print all the unique values in an array

// void unique_arr(int arr[] , int sz) {

//     for(int i=0 ; i<sz ; i++) {
//         int j;
//         for(j=0 ; j<i ; j++) {
//             if(arr[i] == arr[j]) {
//                 break;
//             }
//         }
//         if(j==i) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int sz = 5 ;
//     int arr[sz] ;
//     cout << "enter 5 no. : ";

//     for (int i=0 ; i<sz ; i++){
//         cin >> arr[i] ;
//     }

//     unique_arr(arr , sz) ;

//     return 0 ;
// }
