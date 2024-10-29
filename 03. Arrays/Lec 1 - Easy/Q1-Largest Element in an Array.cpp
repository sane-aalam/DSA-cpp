	
// Largest Element in an Array
#include <vector>
#include <iostream>

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maximumElement = -1;
        for(int currentIndex = 0; currentIndex < arr.size(); currentIndex++){
            if(arr[currentIndex] > maximumElement){
                maximumElement = arr[currentIndex];
            }
        }
        return maximumElement;
    }
};