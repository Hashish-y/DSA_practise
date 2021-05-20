/* C++ program to find the onluy repititive element in an array 
Input  : a[] = {1, 3, 2, 3, 4}
Output : 3

Input  : a[] = {1, 5, 1, 2, 3, 4}
Output : 1   */

#include <bits/stdc++.h>
using namespace std;
  
int findRepeating(int arr[], int n){
    int missingElement = 0;
  
    for (int i = 0; i < n; i++){
  
        int element = arr[abs(arr[i])];
  
        if(element < 0){
            missingElement = arr[i];
            break;
        }
      
    arr[abs(arr[i])] = -arr[abs(arr[i])];
}
  
return abs(missingElement);
  
}
  
//Driver Code
int main(){
    int arr[] = { 5, 4, 3, 9, 8, 9, 1, 6, 2, 5};
  
    int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << findRepeating(arr, n);
  
    return 0;
}