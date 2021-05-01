/* C++ program to rearrange the array the array alternatively
Input: arr[] = {1, 2, 3, 4, 5, 6, 7} 
Output: arr[] = {7, 1, 6, 2, 5, 3, 4}  */

#include <bits/stdc++.h>
using namespace std;

//Function to rearrange the array 
void rearrange(int arr[], int n){
	//Intializing index of first minimum and first maximum elemnt 
	int max_index = n-1, min_index = 0;

	//Store maximumn element of array 
	int max_element = arr[n-1]+1;

	//Tranverse the array 
	for(int i=0; i<n; i++){
		//at even index: we have to put maximum elemnt 
		if(i%2 == 0){
			arr[i] += (arr[max_index]%max_element)*max_element;
			max_index--;
		}
		else{
			arr[i] += (arr[min_index]%max_element)*max_element;
			min_index++;
		}
	}

	//Changing into it's original form 
	for(int i=0; i<n; i++)
		arr[i] = arr[i]/max_element;
}

//Driver Code 
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Original array: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	rearrange(arr, n);

	cout << "\nAfter rearranging: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	return 0;
}
