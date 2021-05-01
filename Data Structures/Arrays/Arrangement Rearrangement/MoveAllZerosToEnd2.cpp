//C++ program to move all zeros to the end of tha array 
#include <iostream>
using namespace std;

//Function to move zeros
void moveZerosToEnd(int arr[], int n){
	int count = 0; // Number of non-zero elements

	for(int i=0; i<n; i++)
		if(arr[i] != 0)
			swap(arr[count++], arr[i]);

}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

//Driver Code 
int main(){
	int arr[] = {1, 0, 2, 3, 0, 4, 0, 5, 0, 6, 7, 0};
	int n= sizeof(arr)/sizeof(arr[0]);

	cout << "Enterd array is: "< printArray(arr, n);

	moveZerosToEnd(arr, n);

	cout << "\nAfter moving array: " << printArray(arr, n);

	return 0;
}