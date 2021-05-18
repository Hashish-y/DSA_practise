/* C++ program to sort 1 to n by swapping adjacent elements 
Given an array, A of size N consisting of elements 1 to N. A boolean array B consisting of N-1 elements indicates that 
if B[i] is 1, then A[i] can be swapped with A[i+1]
Input : A[] = {1, 2, 5, 3, 4, 6}
        B[] = {0, 1, 1, 1, 0}
Output : A can be sorted. We can swap A[2] with A[3] and then A[3] with A[4].  */

#include <bits/stdc++.h>
using namespace std;

bool sortedAfterSwap(int arr[], bool B[], int n){
	int i, j;

	for(int i=0; i<n-1; i++){
		if(B[i]){
			j=i;
			while(B[j])
				j++;

			sort(arr+i, arr+1+j);
			i = j;
		}
	}

	for(int i=0; i<n; i++){
		if(arr[i] != i+1)
			return false;
	}

	return true;
}

//Driver Code 
int main(){
    int arr[] = { 1, 2, 5, 3, 4, 6 };
    bool B[] = { 0, 1, 1, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    if (sortedAfterSwap(arr, B, n))
        cout << "Array can be sorted\n";
    else
        cout << "Array can not be sorted\n";
 
    return 0;
}