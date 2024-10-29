class Solution {
  public:
    int missingNumber(int n, vector<int> &arr) {
        // code here
        
        for(int i = 1; i<=n; i++){
            bool flag = 0;
              //Search the element using linear search:
            for (int j = 0; j < n - 1; j++) {
                if (arr[j] == i) {
                    flag = 1;
                    break;
                }
            }
           // any element is not present ,Then flag become false
           // return index(value)
           if (flag == 0) 
            return i;
        }
        return -1;
    }
};