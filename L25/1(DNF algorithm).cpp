// cd L25 ; g++ -o L25 "1(DNF algorithm).cpp" ; ./L25.exe
#include <iostream>
#include <vector>
using namespace std;

//// optimised approach
// void sortArray(vector<int>& arr, int n) {        // O(n)

//     int zero = 0 , one = 0 , two = 0;

//     for(int i=0 ; i<n ; i++) {
//         if(arr[i] == 0) zero++;
//         else if(arr[i] == 1) one++;
//         else two++;
//     }

//     int idx = 0;
//     for(int i=0 ; i<zero ; i++) {
//         arr[idx++] = 0;
//     }
//     for(int i=0 ; i<one ; i++) {
//         arr[idx++] = 1;
//     }
//     for(int i=0 ; i<two ; i++) {
//         arr[idx++] = 2;
//     }
// }

// void printArr(vector<int>& arr , int n) {
//     for(int i=0 ; i<n ; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
//     int n = 10;

//     sortArray(arr , n);
//     printArr(arr , n);

//     return 0;
// }


//// Dutch National Flag(DNF) sorting algorithm
void DnfSort(vector<int>& arr , int n) {         //O(n)
    int low = 0 , mid = 0 , high = n-1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[mid] , arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
}

void printArr(vector<int>& arr , int n) {
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    DnfSort(arr , n);
    printArr(arr , n);

    return 0;
}
