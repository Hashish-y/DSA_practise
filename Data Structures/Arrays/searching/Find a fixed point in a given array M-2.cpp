/*C++ preogram to find a point in a given array 
Input: arr[] = {-10, -5, 0, 3, 7}
Output: 3  // arr[3] == 3 

Input: arr[] = {-10, -5, 3, 4, 7, 9}
Output: -1  // No Fixed Point  */

#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int low, int high) {
    if(high >= low){
        int mid = (low + high)/2; 
        if(mid == arr[mid])
            return mid;
        if(mid > arr[mid])
            return binarySearch(arr, (mid + 1), high);
        else
            return binarySearch(arr, low, (mid -1));
    }
 
    return -1;
}

//Driver Code 
int main(){
    int arr[10] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Fixed Point is "<< binarySearch(arr, 0, n-1);
    return 0;
}