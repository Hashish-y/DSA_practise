/*C++ program to rearrange array such that index are smaller and odd index elements are greater 
Input  :arr[] = {6, 4, 2, 1, 8, 3}
Output :arr[] = {4, 6, 1, 8, 2, 3}  */

#include <iostream>
using namespace std;

//Function to rearrange the array 
void rearrange(int* arr, int n){
	for(int i=0; i<n; i++){
		if(i%2 == 0 && arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);
		if(i%2 != 0 && arr[i] < arr[i+1])
			swap(arr[i], arr[i+1]);
	}
}

//Function to print array 
void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

//Driver Code 
int main(){
    int arr[] = { 6, 4, 2, 1, 8, 3 }; 
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: " << printArray(arr, n);

    rearrange(arr, n);
    cout << "\nAfter rearranging: " << printArray(arr, n);
    return 0;
}
