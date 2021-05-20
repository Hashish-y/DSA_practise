/*C+ program to fins the element that appears once in an array where every other element appears twice
Input:  ar[] = {7, 3, 5, 4, 5, 3, 4}
Output: 7   */

#include <bits/stdc++.h>
using namespace std;

int findSinglet(int arr[], int n){
	int res = arr[0];
	for(int i=1; i<n; i++)
		res = res^arr[i]; //XOR operator 

	return res;
}

int main(){
	int arr[] = {2, 3, 5, 4, 5, 3, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Element occurs once is: " << findSinglet(arr, n);

	return 0;
}