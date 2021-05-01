/*C++ program to move all negative numbers to end in order with extra space allowed and
task is place all negative element at the end of array without changing the order of positive element and negative element
Input : arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 1  3  2  11  6  -1  -7  -5  */

#include <bits/stdc++.h>
using namespace std;

//Funtion to move all -ve numbers 
void segregrateElements(int arr[], int n){
	//Create a tempporary array 
	int temp[n];

	//Travel array and store +ve element in temp array 
	int j=0;
	for(int i=0; i<n; i++)
		if(arr[i]>0)
			temp [j++] = arr[i];
	//IF array contains all +ve or all -ve numbers
	if(j ==n || j==0 )
		return;

	//Store -ve elements in temp array 
	for(int i=0; i<n; i++)
	    if(arr[i]<0)
	    	temp[j++] = arr[i];

	//Copy temporary to Original array 
	memcpy(arr, temp, sizeof(temp));    

}
void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}
//Driver Code 
int main(){
	int arr[] = {1 ,-1 ,-3 , -2, 7, 5, 11, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array:" << printArray(arr, n);

	segregrateElements(arr, n);

	cout << "\nAfter rearranging array:" << printArray(arr, n);

	return 0;

}