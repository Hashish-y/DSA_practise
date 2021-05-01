//C++ program to find number of Rotations in a sorted and rotated array
#include <bits/stdc++.h>
using namespace std;

//Function to find number of Rotations
int countRotations(int arr[], int n){
	int min = arr[0], min_index;
    
    //As required is the index of minimum value in array
	for(iny i=0; i<n; i++){
		if(min > arr[i]){
			min = arr[i];
			min_index++;
		}
	}
	return min_index;
}

//Driver Code
int main(){
	int arr[] = {2,34,5,7,1,35,45,67};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Number of Rotation is: " << countRotations(arr, n);

	return 0;	
}