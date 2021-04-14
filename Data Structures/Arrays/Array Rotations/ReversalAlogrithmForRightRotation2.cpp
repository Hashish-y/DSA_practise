//C++ program for right rotation of an array
#include <bits/stdc++.h>
using namespace std;

//Function to reverse array
void reverseArray(int arrr, int start, int end){
	while(start < end){
		swap(arr[start], arrr[end])
		start++;
		end--;
	}
}

//Function to Right rotate 
void rightRotate(int arr[], int d, int n){
	reverseArray(arr, 0, n-1);
	reverseArray(arr, 0, d-1);
	reverseArray(arr, d, n-1);
}

//Function to print arrays
void printArray(int arr[], int n){
    for(int i=0; i<size; i++)
    	cout << arr[i] << " ";
}

//Driver Code
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k = 11;
    rightRotate(arr, k, n);
    printArray(arr, n);
}