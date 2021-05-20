/* C++ program find maximum subarrauy sum 
Given an array of A of n integers and an array B of m integers find the Maximum Contiguous Subarray Sum of array A such that
any element of array B is not present in that subarray.
Input : A = {1, 7, -10, 6, 2}, B = {5, 6, 7, 1} 
Output : 2    */
#include <bits/stdc++.h>
using namespace std;

bool isPresent(int B[], int m, int x){
	for(int i=0; i<m; i++)
		if(B[i] == x)
			return true;
	return false;
}

int findMaxSubarraySumutolityFunc(int A[], int B[], int n, int m){
	int max_so_far = INT_MIN, curr_sum = 0;

	for(int i=0; i<n; i++){
		if(isPresent(B, m, A[i])){
			curr_sum = 0;
			continue;
		}
		curr_sum = max(A[i], curr_sum+A[i]);
		max_so_far = max(max_so_far, curr_sum);
	}

	return max_so_far;
}

void findMaxSubarraySum(int A[], int B[], int n, int m){
	int maxSubarraySum = findMaxSubarraySumutolityFunc(A, B, n, m);
	if(maxSubarraySum == INT_MIN)
		cout << "Max Subarray sum cannnot be found" << endl;
    else
    	cout << "Maximum subarray sum: " << maxSubarraySum << endl;
}

//Driver Code 
int main(){
    int A[] = { 3, 4, 5, -4, 6 };
    int B[] = { 1, 8, 5 };
 
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);
 
    findMaxSubarraySum(A, B, n, m);
 
    return 0;	
}