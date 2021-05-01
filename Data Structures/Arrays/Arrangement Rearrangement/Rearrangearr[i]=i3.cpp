//C++ program for rearrange an array s.t arr[i] = i
#include <bits/stdc++.h>
using namespace std;

//Function
void fixArray(int arr[], int n){
	for(int i=0; i<n;){
		if(arr[i]>=0 && arr[i]!=i)
			arr[arr[i]] = (arr[arr[i]] + arr[i]) - (arr[i] = arr[arr[i]]);
		else
			i++;
	}
}

//Driver Code
int main(){
	int arr[] = {1,2,-1,3,4,7,89,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	fixArray(arr, n);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}
