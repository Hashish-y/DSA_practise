/*C++ program to double the first elements and Move all zeros to end 
Input : arr[] = {2, 2, 0, 4, 0, 8} 
Output : 4 4 8 0 0 0 */
#include <bits/stdc++.h>
using namespace std;

//Function to move all zeros to end 
void pushZerosToEnd(int arr[], int n){
	//Count of nonzero elements 
	int count = 0;

	for(int i=0; i<n; i++)
		if(arr[i] != 0)
			//Here count is incremented
			arr[count++] = arr[i];

		//All nonzeros have been shifted to front and count is set as index 
		while(count <n)
			arr[count++] = 0;
}

//Function to rearrange the array after modification
void modifyAndRearrangeArray(int arr[], int n){
	if(n==1)
		return;

	//Tranverse Array 
	for(int i=0; i<n-1; i++){
		if((arr[i] !=0) && (arr[i] == arr[i+1])){
			//Double current index value
			arr[i] = 2*arr[i];
			//Put 0 in the next index 
			arr[i+1] = 0;

			//Increment by 1
			i++;
		}
	}

	pushZerosToEnd(arr, n);
}

//Function to print the array elements 
void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

//Driver Code 
int main(){
	int arr[] = {0,2,2,2,0,6,6,0,0,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Original Array: ";
	printArray(arr, n);

	modifyAndRearrangeArray(arr, n);

	cout << "\nAfter modification: ";
	printArray(arr, n);

	return 0; 
}