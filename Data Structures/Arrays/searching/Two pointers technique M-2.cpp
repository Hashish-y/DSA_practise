//C++ program Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.

#include <bits/stdc++.h>
using namespace std;

int isPairSum(int arr[], int n, int x){
	int i=0, j = n-1;
	while(i<j){
		if(arr[i] + arr[j] == x)
			return 1;

		else if(arr[i] + arr[j] < x)
			i++;

		else
			j--;
	}
	return 0;
}

//Driver Code 
int main(){
    int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
    int val = 17;
     
    int arrSize = *(&arr + 1) - arr;
     
    cout << (bool)isPairSum(arr, arrSize, val);
 
    return 0;
}