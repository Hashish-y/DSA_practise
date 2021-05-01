//C++ program to move all zeros to the end of the array 
#include <bits/stdc++.h>
using namespace std;

//Function to move all zeros to last 
void pushZerosToEnd(int arr[], int n){
	int count = 0; //Count of Non-zero elements

	for(int i=0; i<n; i++)
		if(arr[i] != 0)
			arr[count++] = arr[i];

		while(count < n)
			arr[count++] = 0;
}

//Driver Code 
int main(){
	int arr[] = {1, 0, 2, 3, 0, 4, 0, 5, 0, 6, 7, 0};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Entered array is: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << "\nAfter moving array: ";

	pushZerosToEnd(arr, n);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}