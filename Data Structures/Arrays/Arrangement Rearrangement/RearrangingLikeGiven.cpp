/*C++ program to: 
Given an array of integers, task is to print the array in the order – smallest number, Largest number, 
2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on .... 
Input : arr[] = [5, 8, 1, 4, 2, 9, 3, 7, 6]
Output :arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5}   */

#include <bits/stdc++.h>
using namespace std;

//Function to arrange 
void rearrangeArray(int arr[], int n){
	//Sorting the array elements 
	sort(arr, arr+n);

	//To store modified array 
	int tempArr[n];

	//Adding numbers from sorted array to new array as following
	int arrIndex = 0;

	for(int i=0, j=n-1; i<=n/2 || j>n/2; i++, j--){
		tempArr[arrIndex] = arr[i];
		arrIndex++;
		tempArr[arrIndex] = arr[j];
		arrIndex++;
	}

	//Changing the original array
	for(int i=0; i<n; i++)
		arr[i] = tempArr[i];
}

//Driver Code 
int main(){
	int arr[] = {5,8,1,4,2,9,3,7,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	rearrangeArray(arr, n);

	//Printing the array 
	cout << "After rearranging: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;

}