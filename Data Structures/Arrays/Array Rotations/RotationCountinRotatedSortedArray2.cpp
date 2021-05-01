//C++ program to find Number of rotations in a sorted and rotated array
#include <bits/stdc++.h>
using namespace std;

//Function to find Number of Rotations using Binary Search
int countRotations(int arr[], int low, int high){
	//This condition is needed to handle for an array which is first the array is not rotated at all
	if(high < low)
		return 0;
    
    //If there is only one element left
	if(high == low)
		return high;
    
	int mid = (high+low)/2;
    
    //Check if (mid+1) is minimum element
	if(mid < high && arr[mid+1] < arr[mid])
		return (mid+1);
    
    //Check if the mid itself is Minimum element
	if(mid > low && arr[mid] < arr[mid-1])
		return mid;
    
    //Decide wheter we need to go left half or rigjt half
	if(arr[high] >> arr[mid])
		return countRotations(aar, low, mid-1);

	return countRotations(arr, mid+1, high);

}

//Driver Code
int main(){
	int arr[] = {2,34,5,7,1,35,45,67};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Number of Rotation is: " << countRotations(arr, n);

	return 0;
}