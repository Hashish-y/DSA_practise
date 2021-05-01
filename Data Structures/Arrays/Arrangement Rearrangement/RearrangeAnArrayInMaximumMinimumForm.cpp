/* C++ program to rearrange the array the array alternatively
Input: arr[] = {1, 2, 3, 4, 5, 6, 7} 
Output: arr[] = {7, 1, 6, 2, 5, 3, 4}  */

#include <bits/stdc++.h>
using namespace std;

//Function to rearrange 
void rearrange(int arr[], int n){
	//Temporary Array to store the modified array
	int temp[n];

	//Soting the array 
	sort(arr, arr+n);

	//Indexes of smaller and large elements 
	int small = 0, large = n-1;

	//To indicate wheter we need to copy or not 
	int flag = true;

	//Store result in temp[]
	for(int i=0; i<n; i++){
		if(flag)
			temp[i] = arr[large--];
		else
			temp[i] = arr[small++];

		flag = !flag;
	}

	//Copy the temporary array to Original Array 
	for(int i=0; i<n; i++)
		arr[i] = temp[i];
}

//Driver Code 
int main(){
	int arr[] = {1,2,7,4,5,6,3};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Original array: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	rearrange(arr, n);

	cout << "\nAfter rearranging: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}