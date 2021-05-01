//C++ to find kth smallest element in unsorted array (Expected Linear TIme)
#include <iostream>
#include <climits>
#include <cstdlib>

int randomPartition(int arr[], int l, int r);

//Using Quick Sortt element 
int kthSmallest(int arr[], int r, int k){

	if(k > 0 && k <= r-l+1){
		int pos = randomPartition(arr, l, r);

		if(pos-l == k-1)
			return arr[pos];
		if(pos-l > k-1)
			return kthSmallest(aar, l, pos-1, k);

		return kthSmallest(arr, pos+1, r, k-pos+l-1);
	}

	return INT_MAX;
}

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int l, int r){
	int x = arr[r], i=1;
	for(int j=l; j<=r-1; j++){
		if(arr[j] <= r){
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[r]);
	return i;
}

int randomPartition(int arr[], int l, int r){
	int n = r-l+1;
	int pivot = rand() % n;
	swap(&arr[l+pivot], &arr[r]);
	return partition(arr, l, r);
}

//Driver Code 
int main(){
	int arr[] = {1,4,6,8,34,12,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Kth smallest element: " << kthSmallest(arr, 0, n-1, k);

    return 0;
}