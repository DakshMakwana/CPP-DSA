// cd L18 ; g++ -o L18 "1(Roated sorted array search).cpp" ; ./L18.exe

#include <iostream>
#include <vector>
using namespace std;

//// Roated sorted array Search

int search(vector<int>& A , int target) {
    int st = 0 , end = A.size()-1;

    while(st <= end) {
        int mid = st + (end-st)/2;
        if(A[mid]== target) {
            return mid;
        }

        if(A[st] <= A[mid]) {
            if(A[st] <= target && target <= A[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            if(A[mid] <= target && target <= A[end]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {3,4,5,6,7,0,1,2};
    int target = 0;

    cout << search(nums , target) << endl;
    return 0;
}