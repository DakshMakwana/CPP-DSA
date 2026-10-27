// cd L26 ; g++ -o L26 "2(Next Permutation).cpp" ; ./L26.exe
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//// Next Permutation

void nextPermutation(vector<int>& A) {           // TC = O(n) & SC = O(1)
    
    //1st Step : find pivot
    int pivot = -1 , n = A.size();

    for(int i = n-2 ; i >= 0 ; i--) {
        if(A[i] < A[i+1]) {
            pivot = i;
            break;
        }
    }
    if(pivot == -1) {
        reverse(A.begin() , A.end());
        return;
    }
    
    //2nd Step : next larger element
    for(int i = n-1 ; i > pivot ; i--) {
        if(A[i] > A[pivot]) {
            swap(A[i],A[pivot]);
            break;
        }
    }

    //3rd Step : reverse(piv+1 to n-1)
    int i = pivot + 1 , j = n-1 ;
    while(i <= j) {
        swap(A[i++] , A[j--]);
    }
}

void printArray(vector<int>& A) {
    int n = A.size();
    for(int i=0 ; i<n ; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int>nums = {1,2,3,5,4};

    nextPermutation(nums);
    printArray(nums);
}



//// or we have an c++ STL function included in "algorithm"
// void nextPermutation(vector<int>& A) {
//     next_permutation(A.begin() , A.end());
// }

// void printArray(vector<int>& A) {
//     int n = A.size();
//     for(int i=0 ; i<n ; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int>nums = {1,2,4,5,3};

//     nextPermutation(nums);
//     printArray(nums);
// }