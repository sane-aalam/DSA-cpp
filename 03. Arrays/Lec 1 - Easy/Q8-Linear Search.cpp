

class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {

        // Your code here
        int targetValue = K;
        
        for(int i = 0; i<N; i++){
            if(arr[i] == targetValue){
                return 1;
            }
        }
        return -1;
    }
};