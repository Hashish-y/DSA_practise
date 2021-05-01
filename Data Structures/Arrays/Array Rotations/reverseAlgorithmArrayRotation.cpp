//C++ program for reversal algorithm of array rotation


#include <bits/stdc++.h>
using namespace std;

//reverse the array
void reverseArray(int arr[], int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

//left rotate the array
void leftRotate(int arr[], int d, int n){
	d=d%n;
	reverseArray(arr, 0, d-1);
	reverseArray(arr, d, n-1);
	reverseArray(arr, 0, n-1);
}

//Print array 
void printArray(int arr[], int size){
	for (int i=0; i<size; i++)
		cout << arr[i] << " " ; 
}

int main(){
	int arr[] ={1,2,3,4,5,6,7,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d = 2;

	leftRotate(arr,d, n);
	printArray(arr,n);
	return 0;
}