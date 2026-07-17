// cd L8 ; g++ -o L8 "1(Array).cpp" ; ./L8.exe
#include <iostream>
#include <climits>
using namespace std;


//// Array :- to solve the problem of making multiple variable. but the data should be of same data type.

// int main() {
//     int marks[5] = {99 , 100 , 54 , 33 , 78};
//     int price[] = {76 , 34 , 67};
//     return 0;
// }


//// array index
// int main() {
//     int marks[5] = {99 , 100 , 54 , 33 , 78};
//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;
//     cout << marks[3] << endl;
//     cout << marks[4] << endl;
//     return 0;
// }


//// loops on array
// int main() {
//     int marks[5] = {99 , 100 , 54 , 33 , 78};
//     int size = 5;

//     for(int i = 0 ; i < size ; i++) {
//         cout << marks[i] << endl;
//     }

//     return 0;
// }


//// multiple input
// int main() {
//     int size = 5;
//     int marks[size];

//     for(int i=0 ; i<size ; i++) {
//         cin >> marks[i];
//     }

//     for(int i = 0 ; i < size ; i++) {
//         cout << marks[i] << endl;
//     }

//     return 0;
// }



// Find smallest/largest in array
// int main() {
//     int nums[] = {5,15,22,1,-15,24};
//     int size = 6;

//     float smallest = INT_MAX;
//     float largest = INT_MIN;

//     for(int i=0 ; i<size ; i++) {
//         if(nums[i] < smallest) {
//             smallest = nums[i];             // this is statement's alternate :- smallest = min(nums[i],smallese)
//         }
//     }

//     for(int i=0 ; i<size ; i++) {
//         if(nums[i] > largest) {
//             largest = nums[i];             // this is statement's alternate :- largest = max(nums[i],smallese)
//         }
//     }

//     cout << "smallest value is : " << largest << endl;
//     cout << "largest value is : " << smallest << endl;
//     return 0;
// }


//// Pass by reference
// void changearr(int arr[] , int size) {
//     cout << "in function\n";
//     for(int i=0 ; i<size ; i++) {
//         arr[i] = 2 * arr[i];
//     }
// }

// int main() {
//     int arr[] = {1 ,2 ,3};

//     changearr(arr , 3);               // this function changes the values in array 

//     cout << "in main\n";
//     for(int i=0 ; i<3 ; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
//     return 0;
// }


//// linear search
// int linearSearch(int arr[] , int sz , int target) {
//     for(int i=0 ; i<sz ; i++) {
//         if(arr[i] == target) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz = 7;
//     int target = 50;

//     cout << linearSearch(arr,sz,target) << endl;
//     return 0;
// }



//// reverse an array
// void reverseArr(int arr[] , int sz) {
//     int start = 0 , end = sz-1;

//     while(start < end) {
//         swap(arr[start] , arr[end]);
//         start++;
//         end--;
//     } 
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;

//     reverseArr(arr , sz);

//     for(int i=0 ; i<sz ; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }