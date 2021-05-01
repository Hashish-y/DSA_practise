/*C++ program to rearrange the array such that to move all negative numbers to beginning and positive to 
end with constant extra space 
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5 
Note: Order isn't that important !!!    */

#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
	int j = 0;
	for(int i=0; i<n; i++){
		if(arr[i]<0){
			if(i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

//Driver Code 
int main(){
	int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Original array: ";
	printArray(arr, n);

	rearrange(arr, n);

	cout << "\nAfter rearranging: ";
	printArray(arr, n);
}