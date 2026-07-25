// cd L14 ; g++ -o L14 "2(axWater approach2).cpp" ; ./L14.exe
#include <iostream>
#include <vector>
using namespace std;

// Two Pointer Approach
int maxWater(vector<int> heights){
    int maxWater = 0;

    int LP = 0 , RP = heights.size()-1 ;
    while(LP < RP) {
        int w = RP-LP;
        int ht = min(heights[LP] , heights[RP]);
        int currWater = w * ht ;

        maxWater = max(maxWater , currWater);

        heights[LP] < heights[RP] ? LP++ : RP-- ;
    }

    return maxWater; 
}

int main() {
    vector<int> heights = {1,8,6,2,5,4,8,3,7};

    cout << maxWater(heights) << endl;
    return 0;
}