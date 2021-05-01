/* C++ program to reporder an array according to given index array 
Input:  arr[]   = [10, 11, 12];
        index[] = [1, 0, 2];
Output: arr[]   = [11, 10, 12]
        index[] = [0,  1,  2] */

#include <bits/stdc++.h>
using namespace std;

//Function to reorder elements of array according to indexes 
void reorder(int arr[], int index[], int n){
	int temp[n];
	
	//arr[i] should be present at index[i];
	for(int i=0; i<n; i++)
		temp[index[i]] = arr[i];

	//Copy temp[] to arr[]
	for(int i=0; i<n; i++){
		arr[i] = temp[i];
	    index[i] = i;
	}    
}

//Driver Code 
int main(){
	int arr[] = {50, 40, 70, 60, 90};
	int index[] = {3, 0, 4, 1, 2};
	int n = sizeof(arr)/sizeof(arr[0]);

	reorder(arr, index, n);

	cout << "Reoreder array: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << "\nModified Index array: ";
	for(int i=0; i<n; i++)
		cout << index[i] << " ";

	return 0;
}