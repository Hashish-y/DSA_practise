/* Given an array of n distinct elements, the task is to find all elemnts in array which have at-least 2 grater elements than themselves 
Input : arr[] = {2, 8, 7, 1, 5};
Output : 2  1  5  */

#include <bits/stdc++.h>
using namespace std;

void findElements(int arr[], int n){
	int first = INT_MIN, second = INT_MIN;

	for(int i=0; i<n; i++){
		if(arr[i] > first){
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second)
			second = arr[i];

	}

	for(int i=0; i<n; i++)
		if(arr[i]<second)
			cout << arr[i] << " ";
}

//Driver Code
int main(){
	int arr[] = { 2, -6, 3, 5, 1};
	int n = sizeof(arr)/sizeof(arr[0]);

	findElements(arr, n);
}