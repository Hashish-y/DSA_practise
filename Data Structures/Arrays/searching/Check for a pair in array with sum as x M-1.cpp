/*C++ program to check for pair in array with sum as x
given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x. 
Input: arr[] = {0, -1, 2, -3, 1}
        sum = -2
Output: -3, 1      */

#include <bits/stdc++.h>
using namespace std;

bool hasArrayTwonumbers(int arr[], int n, int sum){
	int l=0,r=n-1;

	sort(arr, arr+n);

	while(l<r){
		if(arr[l] + arr[r] == sum)
			return 1;
		else if(arr[l] + arr[r] < sum)
			l++;
		else
			r--;
	}

	return 0;
}

//Driver Code 
int main(){
    int arr[] = { 1, 4, 45, 6, 10, -8 };
    int sum = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
 
    if (hasArrayTwonumbers(arr, n, sum))
        cout << "Array has two elements with given sum";
    else
        cout << "Array doesn't have two elements with given sum";
 
    return 0;

}