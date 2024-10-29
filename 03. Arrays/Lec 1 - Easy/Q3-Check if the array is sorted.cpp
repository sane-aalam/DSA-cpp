
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        
         if(arr.size() == 1){
             return true;
         }
        // code here

        //* Algorithm --> current Element is greater than equal to privours element 
        bool isSortedArray = false;
        for(int i = 1; i<arr.size(); i++){
            if(arr[i-1] <= arr[i]){
                isSortedArray = true;
            }else{
                isSortedArray = false;
                break;
            }
        }        
        return isSortedArray;
    }
};