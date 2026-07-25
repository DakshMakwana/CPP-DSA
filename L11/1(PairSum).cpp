// cd L11 ; g++ -o L11 "1(PairSum).cpp" ; ./L11.exe
#include <iostream>
#include <vector>
using namespace std;

//// Pair Sum :- return pair in sorted array with target sum.

// Brute force approach
// vector<int> pairSum(vector<int> nums , int target) {
//     vector<int> ans;

//     int n = nums.size();
//     for(int i=0 ; i<n ; i++) {
//         for(int j=0 ; j<n ; j++) {
//             if (nums[i] + nums[j] == target) {
//                 ans.push_back(nums[i]);
//                 ans.push_back(nums[j]);
//                 return ans;
//             }
//         }
//     }
// }

// int main() {
//     vector<int> nums= {2,7,11,15};
//     int target = 9;

//     vector<int> ans = pairSum(nums , target);
//     cout << ans[0] << "," << ans[1] << endl;
//     return 0;
// }


// 2 Pointers Approach
vector<int> pairSum(vector<int> nums , int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0 , j = n-1;

    while (i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        } else if(pairSum < target){
            i++;
        }else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 13;

    vector<int> ans = pairSum(nums , target);
    cout << ans[0] << "," << ans[1] << endl;

    return 0;
}