//C++ program to split and move first part to end
#include <bits/stdc++.h>
using namespace std;

//Function to split 
void splitArray(int arr[], int n, int k){
	for(int i=0; i<k; i++){
		int x = arr[0];
		for(int j=0; j<n; j++)
			arr[j] = arr[j+1];

		arr[n-1] = x;
	}
}

//Driver Code
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int n = sizeof(arr)/sizeof(arr[0]);

	int position = 5;
	splitArray(arr, 0, position);

	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}