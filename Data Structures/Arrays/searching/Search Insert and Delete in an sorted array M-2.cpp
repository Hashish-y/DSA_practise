/* C++ program to search, insert and delete in an unsorted array 
Example 
Input: arr[] = {12, 34, 10, 6, 40};
Ouput: Element Found at Position: 5 */

#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n, int key){
	for(int i=0; i<n; i++)
		if(arr[i] == key)
			return i;

	return -1;
}

int insertSorted(int arr[], int n, int key, int capacity){
	if(n>=capacity)
		return n;

	arr[n] = key;
	return (n+1);
}

int deleteElement(int arr[], int n, int key){
    int pos = findElement(arr, n, key);
 
    if (pos == - 1) {
        cout << "Element not found";
        return n;
    }

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}

//Driver Code 
int main(){

	//Searching 
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 40;
    int position = findElement(arr, n, key);
 
    if (position == - 1)
        cout << "Element not found";
    else
        cout << "Element Found at Position: " << position + 1;
    
    cout << endl;
    
    //Insertion 
    int arr2[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr2) / sizeof(arr2[0]);
    int n2 = 6;
    int i, key2 = 26;
 
    cout << "\nBefore Insertion: ";
    for (i = 0; i < n2; i++)
        cout << arr2[i]<< " ";
 
    n2 = insertSorted(arr2, n2, key2, capacity);
 
    cout << "\nAfter Insertion: ";
    for (i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    
    cout <<endl;

    //Delete Operation
    int arr3[] = {10, 50, 30, 40, 20};
 
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int key3 = 30;
 
    cout << "\nArray before deletion: ";
    for (i = 0; i < n3; i++)
        cout << arr3[i] <<" " ;
 
    n3 = deleteElement(arr, n, key);
 
    cout << "\nArray after deletion: ";
    for (i = 0; i < n3; i++)
        cout << arr[i] << " ";
 
    return 0;
}