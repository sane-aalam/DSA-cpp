

#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    void reverseArray(vector<int>& arr, int start, int end){
        
        while(start < end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
  public:
    void leftRotate(vector<int>& arr, int d) {
        
        int N = arr.size();
        int k = d;
      // step-1 reverse the array 0-k
      // step-2 reverse the baki ka array
      // step-3 reverse entire the array 
        reverseArray(arr,0,k-1);
        reverseArray(arr,k,N-1);
        reverseArray(arr,0,N-1);
    }
};