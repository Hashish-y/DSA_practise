/*C++ preogram to find kth smallest element array in a unsorted array 
Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 3 
Output: 7
Here we are using min heap */

#include <climits>
#include <iostream>
using namespace std;

//Utility function to swap two elements 
void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

//Class for MinHeap
class MinHeap{
	int* harr; //Pointer to array of elements in heap
	int capacity; //maximum possible size of min heap
	int heap_size; //Current number of elements in min heap

public: 
	MinHeap(int arr[], int size); //Constructor 
	void MinHeapify(int i); //To minheapify subtree rooted with index i
	int parent(int i) { return ((i-1)/2); }
	int left(int i) { return (2*i+1); }
	int right(int i) { return (2*i+2); }

	int extractMin(); //Extracts root(minimum) element
	int getMin() { return harr[0]; } // Return minimum
};

MinHeap::MinHeap(int arr[], int size){
	heap_size = size;
	harr = arr; //Storing address of an array 
	int i = (heap_size-1)/2 ;
	while(i>=0){
		MinHeapify(i);
		i--;
	}
}

//Method to remove minimum element(or root) from min heap
int MinHeap::extractMin(){
	if(heap_size == 0)
		return INT_MAX;

	//Store the minimum value 
	int root = harr[0];

	//If there are more than 1 items, move the last item to root and call heapify
	if(heap_size > 1){
		harr[0] = harr[heap_size-1];
		MinHeapify(0);
	}
	heap_size--;

	return root;
}

//A recursive method to heapify a subtree with root at given index
void MinHeap::MinHeapify(int i){
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if(l < heap_size && harr[l] < harr[i])
		smallest = l;
	if(r < heap_size && harr[r] < harr[smallest])
		smallest = r;
	if(smallest != i){
		swap(&harr[i], &harr[smallest]);
		MinHeapify(smallest);
	}
}

//Function to return the required number
int kthSmallest(int arr[], int n, int k){
	//Buid a heap of n  elemenst 
	MinHeap mh(arr, n);

	for(int i=0; i<k-1; i++)
		mh.extractMin();

    return mh.getMin();
}

//Driver Code 
int main(){
	int arr[] = {1,4,6,8,34,12,11};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;

	cout << "Kth smallest elementis: " << kthSmallest(arr, n, k);
	return 0;

}