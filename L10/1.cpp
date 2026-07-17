// cd L10 ; g++ -o L10 "1.cpp" ; ./L10.exe

#include <iostream>
#include <climits>
using namespace std;

//// Subarray
// array :- {1,2,3,4,5}
// 1 element subarray :- {1,2,3,4,5}
// 2 element subarray :- {12,23,34,45}
// 3 element subarray :- {123,234,345}
// 4 element subarray :- {1234,2345}
// 5 element subarray :- {12345}
// total no. of sub array = [n(n+1)]/2

//To print all sub-array
// int main() {
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};

//     for(int st=0 ; st<n ; st++) {
//         for(int end=st ; end<n ; end++) {
//             for(int i=st ; i<=end ; i++) {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//// Maximum subarray sum


// Brute Force approach
// int main() {
//     int n = 7;
//     int arr[] = {3,-4,5,4,-1,7,-8};

//     int maxSum = INT_MIN;
    
//     for(int st=0 ; st<n ; st++) {
//         int currSum = 0;
//         for(int end=st ; end<n ; end++) {
//             currSum += arr[end];
//             maxSum = max(currSum,maxSum);
//         }
//     }

//     cout << "max subarray sum : " << maxSum << endl;
//     return 0;
// }


// Kadane's Algorithm (Most Optimised)
int main() {
    int n = 7;
    int arr[] = {3,-4,5,4,-1,7,-8};

    int currSum = 0;
    int maxSum = INT_MIN;
    
    for(int i=0 ; i<n ; i++) {
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    
    cout << "max subarray sum : " << maxSum << endl;
    return 0;
}