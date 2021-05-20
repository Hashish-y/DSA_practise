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

int findPeakUtil(int arr[], int low, int high, int n){
	int mid = (low+high)/2;

	if((mid>0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid]))
		return mid;

	else if(mid>0 && arr[mid-1] >arr[mid])
		return findPeakUtil(arr, low, (mid-1), n);
	else
		return findPeakUtil(arr, (mid+1), high, n);
}

int findPeak(int arr[], int n){
	return findPeakUtil(arr, 0, n-1, n);
}

//Driver Code
int main() {
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is "
         << findPeak(arr, n);
    return 0;
}