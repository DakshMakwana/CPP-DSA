// cd L19 ; g++ -o L19 "1(Peak Element).cpp" ; ./L19.exe
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//// Peak Index in Mountain Array
// arr = [0,3,8,9,5,2]
int peakIndexInMountainArray(vector<int> A)  {
    int st=1 , end = A.size()-2;

    while(st<end) {
        int mid = st + (end-st)/2;
        if(A[mid-1] < A[mid] && A[mid] > A[mid+1]) {
            return mid;
        }else if(A[mid]<A[mid+1]) {
            st = mid+1;
        }else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {0,3,8,9,5,2};

    cout << peakIndexInMountainArray(nums) << endl;
    return 0;
}