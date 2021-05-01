//C++ program to arrange the array such that arr[i] = i
#include <bits/stdc++.h>
using namespace std;

//Function to change the aaray 
void fixArray(int arr[], int n){
	int temp;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i] = i){
				temp = arr[i];
				arr[j] = arr[i];
				arr[i] = temp;
				break; 
			}
		}
	}
	for(int i=0; i<n; i++){
		if(arr[i] != i)
			arr[i] = -1;
	}

	cout << "Array after Rearrangement: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

int main(){
	int arr[] = {1,2,-1,3,4,7,89,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	fixArray(arr, n);

	return 0;
}