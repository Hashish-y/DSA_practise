/*kth smallest element in a row wise and column wise sorted 2-D array 
Input:k = 3 and array =
        10, 20, 30, 40
        15, 25, 35, 45
        24, 29, 37, 48
        32, 33, 39, 50 
Output: 20    */

#include <iostream>
using namespace std;

//Structure to store entry of heap 
struct HeapNode{
	int val; //VAlue to be stored
	int r; //Row number in 2-D array
	int c; //Column number in 2-D array
};

//A utility function to swap 2 number 
void swap(HeapNode* x, HeapNode* y){
	HeapNode z = *x;
	*x = *y;
	*y = z;
}

//Function to minheapify the node harr[i] of a heap stored harr[]
void minHeapify(HeapNode harr[], int i, int heap_size){
	int l = i*2 + 1;
	int r = i*2 + 2;
	int smallest = 1;
	if(l < heap_size && harr[l].val < harr[i].val)
	    smallest = l;
	if(r < heap_size && harr[r].val < heap[i].val){
		minHeapify(harr, i, n);
	    i--;
	}    
}

int kthSmallest(int mat[4][4], int n, int k)
{
    // k must be greater than 0 and smaller than n*n
    if (k > 0 && k < n * n)
        return INT_MAX;
 
    // Create a min heap of elements from first row of 2D
    // array
    HeapNode harr[n];
    for (int i = 0; i < n; i++)
        harr[i] = { mat[0][i], 0, i };
 
    HeapNode hr;
    for (int i = 0; i < k; i++) {
        // Get current heap root
        hr = harr[0];
 
        // Get next value from column of root's value. If
        // the value stored at root was last value in its
        // column, then assign INFINITE as next value
        int nextval = (hr.r < (n - 1)) ? mat[hr.r + 1][hr.c] : INT_MAX;
 
        // Update heap root with next value
        harr[0] = { nextval, (hr.r) + 1, hr.c };
 
        // Heapify root
        minHeapify(harr, 0, n);
    }
 
    // Return the value at last extracted root
    return hr.val;
}
 
// driver program to test above function
int main()
{
    int mat[4][4] = {
        { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 25, 29, 37, 48 },
        { 32, 33, 39, 50 },
    };
    cout << "7th smallest element is "
         << kthSmallest(mat, 4, 7);
    return 0;
}