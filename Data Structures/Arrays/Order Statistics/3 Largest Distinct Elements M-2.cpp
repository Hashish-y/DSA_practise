//C++ program to find the largest three elements in the given array 
#include <bits/stdc++.h>
using namespace std;

void find3largest(int arr[], int n){
	sort(arr, arr+n);

	int check = 0,count =1;

	for(int i=1; i<=n; i++){
		if(count<4){
			if(check != arr[n-i]){
				cout << arr[n-i] << " ";
				check = arr[n-i];
				count++;
			}
		}
		else
			break;
	} 
}

//Driver Code 
int main(){
	int arr[] = {12, 45, 1, -1, 45, 54, 23, 5, 0, -10};
	int n = sizeof(arr)/sizeof(arr[0]);
	find3largest(arr, n);
}