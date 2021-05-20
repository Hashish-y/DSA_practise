// C++ program to find the position of an elements in a sorted of infinite numbers 

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
	if(l <= r){
		int mid = (l+r)/2;

		if(x == arr[mid])
			return mid;
		if(arr[mid] > x)
			binarySearch(arr, l,mid+1, x);
		return binarySearch(arr, mid-1, r, x);
	}
	return -1;
}

int findPos(int arr[], int key){
	int l=0,h=1, val = arr[0];
	while(val < key){
		l = h;
		h = 2*h;
		val  arr[h];
	}

	return binarySearch(arr, l, h key);
}

int main(){
	int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170};
	int n = sizeof(arr)/sizeof(arr[0]);
	int ans = findPos(arr, 10);

	if(ans == -1)
		cout << "Element not found";
	else
		cout <  "Element at index: " << ans;

	return 0;
}