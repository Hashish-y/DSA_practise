//C program to Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i

/*Example: 
Input : arr[] = {1, 2, 3, 4, 5, 6, 7}
Output : 4 5 3 6 2 7 1 */

#include <bits/stdc++.h>
using namespace std;

int printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

//Function to rearrange the array
void rearrangeArr(int arr[], int n){
	//Total even Positions
	int evenPos = n/2;

	//Total odd positions
	int oddPos = n = evenPos;

	int tempArr[n];

	//Creating a duplicate array 
	for(int i=0; i<n; i++)
		tempArr[i] = arr[i];

	//sorting the duplicate one
	sort(tempArr, tempArr+n);

	int j = oddPos-1;

	//Fill up odd position in original array 
	for(int i=0; i<n; i+=2){
		arr[i] = tempArr[j];
		j--;
	}

	//fill even positions in original array
	for(int i=1; i<n; i+=2){
		arr[i] = tempArr[j];
		j++;
	}

	printArray(arr, n);
} 

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	rearrangeArr(arr, n);

	return 0;
}