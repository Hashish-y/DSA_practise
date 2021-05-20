/*C++ program to find a peak element in an array 
An array element is a peak if it is NOT smaller than its neighbours. For corner elements, we need to consider only one neighbour. 
Input: array[]= {5, 10, 20, 15}
Output: 20
The element 20 has neighbours 10 and 15, both of them are less than 20.

Input: array[] = {10, 20, 15, 2, 23, 90, 67}
Output: 20 or 90
The element 20 has neighbours 10 and 15, both of them are less than 20, similarly 90 has neighbous 23 and 67.  */

#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int n){
	if(n==1)
		return 0;
	if(arr[0] >= arr[1])
		return 0;
	if(arr[n-1] >= arr[n-2])
		return n-1;
    
    int i;
	for(i=1; i<n-1; i++){
		if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
			return i;
	}
	return -1;
}

//Driver Code
int main(){
	int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Index of a peak pont is: " << findPeak(arr, n);

	return 0;
}