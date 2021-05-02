/*C++ program to find the largest three elements in a given array 
Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23  */

#include <bits/stdc++.h>
using namespace std;

//Function to find the 3 largest elements 
void print3Largest(int arr[], int n){
	int first, second, third;

	if(n <3){
		cout << "Invalid Input ";
		return ;
	}

	third = second = first = INT_MIN;
	for(int i=0; i<n; i++){
		if(arr[i] > first){
			third = second;
			second = first;
			first = arr[i];
		}

		else if (arr[i] > second){
			third = second;
			second = arr[i];
		}

		else if(arr[i] > third){
			third = arr[i];
		}
	}

	cout << "3 Largest elements are: " << first << second << third ;

}

//Driver Code
int main(){
	int arr[] = {10, 4, 3, 50, 23, 90};
	int n = sizeof(arr)/sizeof(arr[0]);

	print3Largest(arr, n);
	return 0;
}