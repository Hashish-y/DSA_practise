//C++ program to search, insert and delete in a sorted array

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key){

	int mid = (high + low)/2;

	if(high < low)
		return -1;

	if(key == arr[mid])
		return mid;
	if(key > arr[mid])
		return binarySearch(arr, (mid+1), high, key);
	return binarySearch(arr, low, (mid-1), key);
}

int insertedSorted(int arr[], int n, int key, int capacity){
	if(n>=capacity)
		return n;
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];
 
    arr[i + 1] = key;
 
    return (n + 1);
}

int deleteElement(int arr[], int n, int key){
	int pos = binarySearch(arr, 0, n-1, key);

	if(pos ==-1){
		cout << "Element not found...!!!";
		return n;
	}

	for(int i=pos; i<n-1; i++)
		arr[i] = arr[i+1];

	return -1;
}

//Driver Code 
int main(){
    int arr[] = { 5, 6, 7, 8, 9, 10 };
    int n, key;
 
    n = sizeof(arr) / sizeof(arr[0]);
    key = 10;
 
    cout << "Index: " << binarySearch(arr, 0, n - 1, key) << endl;

    cout << endl;

    int arr2[20] = { 12, 16, 20, 40, 50, 70 };
    int capacity = sizeof(arr2) / sizeof(arr2[0]);
    int n2 = 6;
    int key2 = 26;
 
    cout<< "\nBefore Insertion: ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
 
    // Inserting key
    n = insertedSorted(arr2, n2, key2, capacity);
 
    cout << "\nAfter Insertion: ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i]<< " ";
    
    cout << endl;

    int arr3[] = { 10, 20, 30, 40, 50 };
 
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int key3 = 30;
 
    cout << "\nArray before deletion: ";
    for (int i = 0; i < n3; i++)
        cout << arr3[i] << " ";
 
    n3 = deleteElement(arr3, n3, key3);
 
    cout << "\nArray after deletion: ";
    for (int i = 0; i < n3; i++)
        cout << arr3[i] << " ";    

    cout << endl;

    return 0;    
}