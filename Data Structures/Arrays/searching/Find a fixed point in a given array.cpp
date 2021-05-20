/*C++ preogram to find a point in a given array 
Input: arr[] = {-10, -5, 0, 3, 7}
Output: 3  // arr[3] == 3 

Input: arr[] = {-10, -5, 3, 4, 7, 9}
Output: -1  // No Fixed Point  */

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		if(arr[i] == i)
			return i;
	}

	return -1;
}

//Driver Code 
int main(){
	int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Fixed Point: " << linearSearch(arr, n);

	return 0;
}