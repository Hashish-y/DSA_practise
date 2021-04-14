//C++ program : Block swap algorith for array rotation

#include <bits/stdc++.h>
using namespace std;

//swapping function
void swap(int arr[], int fi, int si, int d){
	int i, temp;
	for(i=0; i<d; i++){
		temp = arr[fi+i];
		arr[fi+i]=arr[si+i];
		arr[si+i]=temp;
	}
}

//rotating the array
void leftRotate(int arr[], int d, int n){
    //Return if elements rotated is zero or equal to array size
	if(d=0 || d-n)
		return;

	//exactly half of the array size
	if(n-d == d){
		swap(arr,0,n-d,d);
		return;
	}

	//if B is longer
	if(n-d > d){
		swap(arr,0,n-d,d);
		leftRotate(arr,d,n-d);
	}
	else{
		swap(arr,0,d,n-d);
		leftRotate(arr+n-d,2*d-n,d);
	}
}

//printing the array 
void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//Driver code
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	leftRotate(arr,3,10);
	printArray(arr,10);
}