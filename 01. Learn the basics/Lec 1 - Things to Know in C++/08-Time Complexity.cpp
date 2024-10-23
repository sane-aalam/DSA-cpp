
#include <bits/stdc++.h>
using namespace std;

//* # Time complexity 
// PrintArray = 0(n) number of Element N
// searchElement = 0(n) wrost case it can be happen, Last element is target element
// binarySearch Algorithm = 0(LogN) (divide and conquer rule) - Half the one part (every case)

// --> Printing the array 
void printArray(int arr[], int sizeOfArray){
    for(int index = 0; index < sizeOfArray; index++){
        cout << arr[index] << "";
    }
}

// --> Search Element into array
// --> For Loop
void searchElement(int *arr, int sizeofArray, int target){
    for(int currIndex = 0; currIndex < sizeofArray; currIndex++){
        if(arr[currIndex] == target){
            cout << "Element is present into the array" << endl;
        }
    }
    cout << "Element is not present into the array" << endl;
}

// --> search Element Optimization Way
// --> While Loop
int searchElementOptimization(int *arr, int arraySize, int target){
     int start = 0;
     int end = arraySize - 1;
     int mid = start + (end-start)/2;
     while(start <= end){
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
     }
     return -1;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    int sizeOfArray = sizeof(arr)/sizeof(int);
    printArray(arr,sizeOfArray);
    int target = 5;
    searchElement(arr,sizeOfArray,target);
    int result = searchElementOptimization(arr,sizeOfArray,target);
    if(result == -1){
        cout << "Element is not present" << endl;
    }else{
        cout << "Element is present at index :: " << result << endl;
    }
    return 0;
}