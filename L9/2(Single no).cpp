// cd L9 ; g++ -o L9 "2(Single no).cpp" ; ./L9.exe
#include <iostream>
#include <vector>
using namespace std;

// Single Number Problem
int single_num(vector<int>& nums) {
    int ans = 0 ;

    for(int val : nums) {
        ans = ans ^ val;
    }
    
    return ans ;
}

int main() {
    vector<int> nums = {4,1,2,1,4,2};
    
    cout << single_num(nums) << endl;

    return 0;
}