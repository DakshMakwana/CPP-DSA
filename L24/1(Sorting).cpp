// cd L24 ; g++ -o L24 "1(Sorting).cpp" ; ./L24.exe
#include <iostream>
using namespace std;

// Sorting :- arrangment of data in particular ordeer


//// 1) Bubble Sort
// void bubbleSort(int arr[] , int n) {             // O(n^2)

//     for(int i=0 ; i < n-1 ; i++) {
//         bool isSwap = false;

//         for(int j=0 ; j<n-i-1 ; j++) {
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j] , arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap) {
//             return;
//         }
//     }
// }

// void printArray(int arr[] , int n) {
//     for(int i=0 ; i<n ; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n = 5;
//     int arr[] = {4,1,5,2,3};

//     bubbleSort(arr , n);
//     printArray(arr , n);
//     return 0;
// }


//// 2) Selection Sort
void selectionSort(int arr[] , int n) {
    bool isSwap = false;

    for(int i=0 ; i<n-1 ; i++) {
        int smallestIndex = i;
        for(int j = i+1 ; j<n ; j++) {
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
                isSwap = true;
            }
        }
        swap(arr[i],arr[smallestIndex]);
        if(!isSwap){
            return;
        }
    }
}

void printArray(int arr[] , int n) {
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4,1,5,2,3};
    int n =5;

    selectionSort(arr , n);
    printArray(arr , n);
    return 0;
}


//// 3) Isertion Sort

void insertionSort(int arr[] , int n) {
    for(int i=1 ; i<n ; i++) {
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}

void printArray(int arr[] , int n) {
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 7;
    int arr[] = {4,1,5,2,3};

    insertionSort(arr , n);
    printArray(arr , n);
    return 0;
}