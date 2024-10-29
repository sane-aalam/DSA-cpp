
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {

        // Your code here
        int targetValue = K;
        int start = 0;
        int end = N - 1;
        int mid = start + (end-start)/2;
        while(start <=end){
            if(arr[mid] == targetValue){
                return 1;
            }else if(arr[mid] < targetValue){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // update the middle value using (new start,new end)
            mid = start + (end-start)/2;
        }
        return -1;
    }
};