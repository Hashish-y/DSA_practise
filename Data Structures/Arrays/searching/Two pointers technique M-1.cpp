//C++ program Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.

#include <bits/stdc++.h>
using namespace std;

bool isPairSum(int arr[], int n, int x){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i ==j)
				continue;

			if(arr[i] + arr[j] == x)
				return true;

			if(arr[i] + arr[j] > x)
				break;
		}
	}

	return false;
}

//Driver Code 
int main(){
    int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
    int val = 17;
    int arrSize = *(&arr + 1) - arr;

    sort(arr, arr + arrSize);
    cout << isPairSum(arr, arrSize, val);
 
    return 0;
}