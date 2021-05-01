/*C++ program to rearrange the array such that to move all negative numbers to beginning and positive to 
end with constant extra space 
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5 
Note: Order isn't that important !!!    */

#include <bits/stdc++.h>
using namespace std;

//Function to rearrange all the negative elements on left side
void shiftall(int arr[], int left, int right){
	//loop to iterate 
	while(left <= right){

		//Condition to check if left and right elements are negative
		if(arr[left] < 0 && arr[right] < 0)
			left__;

		//Condition to check if the left ponter element is +ve and the right is negative 
		else if(arr[left] > 0 && arr[right] < 0){
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp ;
			left++;
			right--;
		}

		//Condition to check if both elements are positive 
		else if(arr[left] > 0 && arr[right] > 0)
			right --;
		else{
			left++;
			right--;
		}
	}
}

//Function to print the array 
void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i]< " " ;
}

int main(){
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Oruginal array: " << printArray(arr, n);

	shiftall(arr, 0, n-1);

	cout << "\nAfter rearranging: " << printArray(arr, n);

	return 0;
}