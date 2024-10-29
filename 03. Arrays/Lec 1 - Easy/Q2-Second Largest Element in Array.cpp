
#include <vector>
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        
        int n = arr.size();
        int firstLargestElement = -1;
        int secondLargestElement = -1;
        
       // if currentRank higher to student-1 Ranks
        // So you need to rearrange the ranks 
        // second student assign the value of firststudent rank 
	   // first student assign new value(High value)
	   // Dry Run is one of most (IMP)

        for(int index = 0; index < n; index++){
              if(firstLargestElement < arr[index]){
                  secondLargestElement = firstLargestElement;
                  firstLargestElement = arr[index];
              }else if(firstLargestElement > arr[index] && arr[index] > secondLargestElement){
                  secondLargestElement = arr[index];
              }
        }
        
        return secondLargestElement;
    }
};