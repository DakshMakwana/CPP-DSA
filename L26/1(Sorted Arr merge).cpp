// cd L26 ; g++ -o L26 "1(Sorted Arr merge).cpp" ; ./L26.exe
#include <iostream>
#include <vector>
using namespace std;


//// Merge 2 sorted array 

void mergeArr(vector<int>& A , vector<int>& B , int m , int n) {     // O(m+n) = TC
    int idx = m+n-1 , i = m-1 , j = n-1;

    while(i>=0 && j>=0) {
        if(A[i] >= B[j]) {
            A[idx--] = A[i--] ;
        }else {
            A[idx--] = B[j--] ;
        }
    }

    while(j >= 0) {
        A[idx--] = B[j--] ;
    }
}

void printArr(vector<int> A , int m , int n) {
    for(int i=0 ; i<m+n ; i++) {
        cout << A[i] << " " ;
    }
    cout << endl;
}

int main(){
    vector<int> A = {1,2,3,0,0,0} , B = {4,5,6};
    int m = 3 , n = 3;
    
    mergeArr(A,B,m,n);
    printArr(A,m,n);

    return 0; 
}