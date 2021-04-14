//C++ program to find left rotations
#include <bits/stdc++.h>
using namespace std;

//Function to left rotate array multiple times
void leftRotate(int arr[], int n, int k){
	int mod = k%n;

	for(int i=0; i<n; i++)
		cout << arr[(mod+i)%n] << " ";

	cout << endl;
}

//Driver Code 
int main(){

	int arr[] = {2,3,4,8,10,12};
	int n = sizeof(arr)/sizeof(arr[0]);

	int k =3;
	leftRotate(arr, n, k);

	int k1 = 4;
	leftRotate(arr, n, k1);

	return 0;
}