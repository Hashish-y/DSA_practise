/*C++ program to check for pair in array with sum as x
given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x. 
Input: arr[] = {0, -1, 2, -3, 1}
        sum = -2
Output: -3, 1      */

#include <bits/stdc++.h>
using namespace std;

void printPairs(int arr[], int n, int x){
	int i, rem[x];

	for(i=0; i<x; i++)
		rem[i] == 0;

	for(i=0; i<n; i++){
		if(arr[i] < x)
			rem[arr[i]%x]++;
	}

	for(int i=1; i<x/2; i++){
		if(rem[i]>0 && rem[x-i]>0){
			cout << "Yes" << endl;
			break;
		}
	}

	if(i >= x/2){
		if(x%2 == 0){
			if(rem[x/2] > 1)
				cout << "yes" << endl;
			else
				cout << "No" << endl;
		}
		else
			if(rem[x/2] >0 && rem[x-x/2] >0)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
	}
}

//Driver code
int main(){
    int arr[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 16;
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printPairs(arr, n, sum);
 
    return 0;
}