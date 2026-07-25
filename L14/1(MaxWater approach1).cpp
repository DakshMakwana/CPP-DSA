// cd L14 ; g++ -o L14 "1(MaxWater approach1).cpp" ; ./L14.exe
#include <iostream>
#include <vector>
using namespace std;

//// container with most water

// Brute-force approach
int maxWater(vector<int> heights) {
    int maxWater = 0;

    for(int i=0 ; i < heights.size() ; i++){
        for(int j=i+1 ; j < heights.size() ; j++) {
            int B = j-i;
            int H = min(heights[i] , heights[j]);
            int currWater = H * B;

            maxWater = max(maxWater , currWater);
        }
    }
    return maxWater;
}

int main() {
    vector<int> heights = {1,8,6,2,5,4,8,3,7};

    cout << maxWater(heights) << endl;
    return 0;
}