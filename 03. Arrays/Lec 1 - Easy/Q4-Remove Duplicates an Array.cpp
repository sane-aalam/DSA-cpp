
//* --> Problem statement ::
// Given a sorted array arr. Return the size of the modified array which contains only distinct elements.
// Note:
// 1. Don't use set or HashMap to solve the problem.
// 2. You must return the modified array size only where distinct elements are present and modify the original array such that all the distinct elements come at the beginning of the original array.


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int remove_duplicate(vector<int> &arr) {
     
    // Modification of the array using without duplicataion 
    // using updateIndex we have to keep track the (how many of elements we have current element!)
    // we can solve this problem using Re-order the array
       int updateIndex = 0;
       int n = arr.size();
       for(int i = 1; i<n; i++){
             // index 0 element is not equal to index 1 element
             if(arr[updateIndex] != arr[i]){
                 arr[updateIndex+1] = arr[i];
                 updateIndex++;
             }
       }
       return updateIndex+1;
    }
};