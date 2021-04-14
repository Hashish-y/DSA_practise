//C++ program to cylindricallly rotate an array by one

#include <bits/stdc++.h>
using namespace std;

//Rotating the array
void rotateonetime(int arr[], int n){
	int x = arr[n-1];
	for(int i=n-1; i>0; i--)
		arr[i]=arr[i-1];
	arr[0]=x;
}

//Printing array
void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

//Driver Code
int main(){
	int arr[1000], n, x;
	cout << "Enter number of elemnts in array: ";
	cin >> n;

	cout << "\nEnter " << n <<" elemnts: ";
	for(int i=0; i<n; i++)
		cin >> arr[i];

	cout << "\nNumber of times of cylindrical rotation: ";
	cin >> x;

	while(x>0){
		rotateonetime(arr,n);
		x--;
	}
	cout << "\nEnter after rotation: "
	printArray(arr,n);


	return 0;
}