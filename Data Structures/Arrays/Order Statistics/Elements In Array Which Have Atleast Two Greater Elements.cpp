/* Given an array of n distinct elements, the task is to find all elemnts in array which have at-least 2 grater elements than themselves 
Input : arr[] = {2, 8, 7, 1, 5};
Output : 2  1  5  */

#include <bits/stdc++.h>
using namespace std;

void findElements(int arr[], int n){
	for(int i=0; i<n; i++){
		int count =0; 
		for(int j=0; j<n; j++)
			if(arr[j] > arr[i])
				count++;
		if(count >= 2)
		cout << arr[i] << " ";	
	}
}

//Driver Code 
int main(){
	int arr[] = { 2, -6 ,3 , 5, 1};
	int n = sizeof(arr)/sizeof(arr[0]);

	findElements(arr, n);
}