// cd L11 ; g++ -o L11 "2(Major Element).cpp" ; ./L11.exe
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//// Majority Element :- frequency of an element is greater then n/2

// Brute force approach
// int majorEle(vector<int> nums) {
    
//     for(int val : nums) {
//         int freq = 0;

//         for(int el : nums) {
//             if(el == val) {
//                 freq++;
//             }
//         }
//         if (freq > nums.size()/2){
//             return val;
//         }
//     }
//     return -1;
// }

// int main() {
//     vector<int> nums = {1,2,2,1,1};

//     cout << "Majority Element is : " << majorEle(nums) << endl;
//     return 0;
// }


// Optimised Approach
// int majorEle(vector<int> nums){
//     int n = nums.size();
//     sort(nums.begin() , nums.end());

//     int freq = 1;
//     int ans = nums[0];
    
//     for(int i=1 ; i<n ; i++){
//         if(nums[i] == nums[i-1]) {
//             freq++;
//         }else {
//             freq = 1;
//             ans = nums[i];
//         }

//         if(freq > n/2){
//             return ans;
//         }

//     }
// }

// int main() {
//     vector<int> nums = {1,2,2,1,1};

//     cout << "Majority Element is : " << majorEle(nums) << endl;
//     return 0;
// }


// Moore's Voting Algorithm
int majorEle(vector<int> nums) {
    int n = nums.size();
    int freq = 0 , ans = 0 ;

    for(int i=0 ; i<n ; i++) {
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        }else {
            freq--;
        }
    }
    int count = 0;
    for(int val : nums) {
        if(val == ans) {
            count++;
        }
    }

    if(count > n/2) {
        return ans;
    }else {
        return -1;
    }

}

int main() {
    vector<int> nums = {1,2,2,1,1};

    cout << "Majority Element is : " << majorEle(nums) << endl;
    return 0;
}