
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int nonZeroElementIndex = 0;
         // current Element is non-zero element, put into first into arary
         for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[nonZeroElementIndex],nums[i]);
                nonZeroElementIndex ++;
            }
         }
    }
};