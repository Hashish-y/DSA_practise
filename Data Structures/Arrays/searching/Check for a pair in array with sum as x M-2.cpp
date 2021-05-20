/*C++ program to check for pair in array with sum as x
given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x. 
Input: arr[] = {0, -1, 2, -3, 1}
        sum = -2
Output: -3, 1      */

#include <bits/stdc++.h>
using namespace std;

void printPairs(int arr[], int n, int sum){
	unordered_set<int> s;
	for(int i=0; i<n; i++){
		int temp = sum-arr[i];
		if(s.find(temp) != s.end())
			cout << "Pair with given sum " << sum << " is (" <<arr[i] <<", "<<temp << ")" << endl;
		s.insert(arr[i]);
	}
}

//Driver Code 
int main(){
	int arr[] ={ 1, 4, 45, 6, 10, 8 };
	int sum = 16;
	int n = sizeof(arr)/sizeof(arr[0]);

	printPairs(arr, n, sum);

	return 0;
}