/*C++ program to find kth smallest element in the given array 
Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 3 
Output: 7 */

#include <algorithm>
#include <iostream>
using namespace std;

//Function to return kth smallest element 
int small(int arr[], int n, int k){
	//Sort the given array
	sort(arr, arr+n);

	//Return kth element in the sorted array 
	return arr[k-1];
}

//Driver Code 
int main(){
	int arr[] = {1,4,6,8,34,12,11};
	int n = sizeof(arr)/sizeof(arr[0]), k;
	cout << "Enter the value of k: ";
	cin >> k;
	cout << "\nkth smallest element: " << small(arr, n, k);

	return 0;
}