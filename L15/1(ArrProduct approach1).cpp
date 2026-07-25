// cd L15 ; g++ -o L15 "1(ArrProduct approach1).cpp" ; ./L15.exe
#include <iostream>
#include <vector>
using namespace std;

vector<int> arrProduct(vector<int> nums) {
    int n = nums.size();
    vector<int> ans(n,1);

    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            if(i != j) {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,3,4};

    for(int i=0 ; i < nums.size() ; i++) {
        cout << arrProduct(nums)[i] << " , ";
    }
    cout << endl;
    return 0;
}