//C++ program to find a pair with given sum in a sorted and rotated array
#include <bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(int arr[], int n, int x){
	int i;
	for(int i=0; i<n-1; i++)
		if(arr[i]>arr[i+1])
			break;

	int l = (i+1)%n; // l is index of smallest number
    int r = i; // r is index of largest element

    //Continue untill both l and r are equal 
    while(l != r){
    	if (arr[l] + arr[r] == x)
    		return 1;

    	if(arr[l] + arr[r] < x)
    		l = (l+1)%n;
    	else
    		r = (n+r-1)%n;
    }
    return 0;
}

//Driver Code
int main() {
	int arr[] = {11, 34, 56, 1, 6};
    int sum = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    if(pairInSortedRotated(arr, n, sum))
    	cout << "Array has two elements with sum 7";
    else
    	cout << "Array doesn't contain elements with sum 7";

    return 0;
}