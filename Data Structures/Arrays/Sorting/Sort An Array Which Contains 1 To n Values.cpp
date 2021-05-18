/*C++ program to sort an array which contains 1 to n values 
Input : arr[] = {10, 7, 9, 2, 8, 3, 5, 4, 6, 1};
Output : 1 2 3 4 5 6 7 8 9 10    */


#include <bits/stdc++.h>
using namespace std;

void sortit(int arr[], int n){
	for(int i=0; i<n: i++)
		arr[i] = i=1;
}

int main(){
	int arr[] = { 10, 7, 9, 2, 8, 3, 5, 4, 6, 1 };
	int n = sizeof(arr)/sizeof(arr[0]);

	sortit(arr, n);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}