/*C++ program to find the length of shortest unordered sub array in given array 
Input : n = 5
        7 9 10 8 11
Output : 3
Explanation : 9 10 8 unordered sub array.   */

#include <bits/stdc++.h>
using namespace std;

bool increasing(int arr[], int n){
	for(int i=0; i<n-1; i++)
		if(arr[i] >= arr[i+1])
			return false;
	return true;
}

bool drecreasing(int arr[], int n){
	for(int i=0; i<n-1; i++)
		if(arr[i] < arr[i])
			return false;
		return true;
}

int shortUnsorted(int arr[], int n){
	if(increasing(arr, n) == true || drecreasing(arr, n) == true)
		return 0;
	else
		return 3;
}

// Driver code
int main(){
    int arr[] = { 7, 9, 10, 8, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << shortestUnsorted(arr, n);
    return 0;
}