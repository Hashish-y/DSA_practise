/* C++ program find maximum subarrauy sum 
Given an array of A of n integers and an array B of m integers find the Maximum Contiguous Subarray Sum of array A such that
any element of array B is not present in that subarray.
Input : A = {1, 7, -10, 6, 2}, B = {5, 6, 7, 1} 
Output : 2    */

#include <bits/stdc++.h>
using namespace std;

int findMaxSubarraySum(vector<int> A, vector<int> B){
	unordered_map<int, int> m;

	for(int i=0; i<B.size(); i++)
		m[B[i]] = 1;

	int max_so_far = INT_MIN;
	int currmax = 0;

	for(int i=0; i<A.size(); i++){
		if(currmax<0 || m[A[i]] == 1){
			currmax = 0;
			continue;
		}

		currmax = max(A[i], currmax+A[i]);

		if(max_so_far < currmax)
			max_so_far = currmax;
	}
	return max_so_far;
}

//Driver Code 
int main(){
	vector<int> a = { 3, 4, 5, -4, 6 };
	vector<int> b = { 1, 8, 5 };

	cout << findMaxSubarraySum(a,b);

	return 0;
}