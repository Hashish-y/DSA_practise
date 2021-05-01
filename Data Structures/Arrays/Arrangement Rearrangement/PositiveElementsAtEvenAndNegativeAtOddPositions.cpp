/* C++ program to arrange +ve elements at even and -ve at odd Positions 
Input : arr[] = {1, -3, 5, 6, -3, 6, 7, -4, 9, 10}
Output : arr[] = {1, -3, 5, -3, 6, 6, 7, -4, 9, 10}   */

#include <bits/stdc++.h>
using namespace std;

//Function to rearrange 
void rearrange(int arr[], int n){
	int positive =0, negative = 1;
	while(true){
		while(positive < n && arr[postive] >= 0)
			postive+= 2;

		while(negative < n && arr[negative] < 0)
			negative+=2;

		if(postive < n && negative < n)
			swap(arr[postive], arr[negative]);

		else
			break;
	}
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

//Driver Code 
int main(){
	int arr[] = { 1, -3, 5, 6, -3, 6, 7, -4, 9, 10 };
	int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: " << printArray(arr, n);

	rearrange(arr, n);
    
    cout << "\nAfter rearranging: " << printArray(arr, n);
    
    return 0;
}