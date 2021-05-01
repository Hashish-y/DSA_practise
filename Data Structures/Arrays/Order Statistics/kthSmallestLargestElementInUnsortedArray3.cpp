/*C++ preogram to find kth smallest element array in a unsorted array 
Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 3 
Output: 7 */ 

#include <climits>
#include <iostream>
using namespace std;

//Function to swap
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*Function to Quick sort
Here it considers the kast element as pivot and moves all smaller elements to the left of it 
and greater elements to right  */
int partition(int arr[], int l, int r){
	int x = arr[r], i=l;
	for(int j=l; j<=r-1; j++){
		if(arr[j] < x){
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[r]);
	return i;
}

int kthsmallestBinary(int arr[], int l, int r, int k){
	if(k>0 && k<=r-l+1){
		//Partition of array around last element and get psoition of pivot in sorted array 
		int pos = partition(arr, l, r);

		if(pos-l == k-1)
			return arr[pos];
		if(pos-l > k-1)
			return kthsmallestBinary(arr, pos+1, r, k-pos+l-1);
	}
	return INT_MAX;
}

//Driver Code 
int main(){
	int arr[] = {1,4,6,8,34,12,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	cout << "Kth smallest element: " << kthsmallestBinary(arr, 0, n-1, k);

	return 0;
}