/*C++ program to find the row with maximum number of 1s
Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Output: 2 */

#include <bits/stdc++.h>
#define R 4
#define C 4
using namespace  std;

int binarysearch(bool arr[], int low, int high){
	if(high>=low){
		int mid = (low + high)/2 ;

		if((mid==0 || arr[mid-1]==0) && arr[mid] == 1)
			return mid;

		else if(arr[mid] == 0)
			return binarysearch(arr, (mid+1), high);
		else
			return binarysearch(arr, low, (mid-1));
	}
	return -1;
}

int rowwithmax1s(bool mat[R][C]){
	int maxrowind = 0, max =-1;
	int i, index;
	for(i=0; i<R; i++){
		index = binarysearch(mat[i], 0, C-1);
		if(index != -1 & C-index > max){
			max = C-index;
			maxrowind = i;
		}
	}
	return maxrowind;
}

// Driver Code
int main() {
    bool mat[R][C] = { {0, 0, 0, 1},{0, 1, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0}};
 
    cout << "Index of row with maximum 1s is " << rowWithMax1s(mat);
 
    return 0;
}