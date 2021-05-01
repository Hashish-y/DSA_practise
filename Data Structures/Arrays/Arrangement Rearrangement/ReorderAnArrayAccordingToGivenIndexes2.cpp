/* C++ program to reporder an array according to given index array 
Input:  arr[]   = [10, 11, 12];
        index[] = [1, 0, 2];
Output: arr[]   = [11, 10, 12]
        index[] = [0,  1,  2] */

#include <bits/stdc++.h>
using namespace std;

//Function to reorder elements of arr[] according to index[]
void reorder(int arr[], int index[], int n){
	//Fix all elements one by one 
	for(int i=0; i<n; i++){
		//while index[i] and arr[i] are not fixed 
		while(index[i] != i){
			//Store values 
			int oldTargetI = index[index[i]];
			char oldTargetE = arr[index[i]];

			//Modifying
			arr[index[i]] = arr[i];
			index[index[i]] = index[i];

			index[i] = oldTargetI;
			arr[i] = oldTargetE;
		}
	}
}

int main(){
	int arr[] = {50,40,70,60,90};
	int ondex[] = {3,0,4,1,2};
	int n = sizeof(arr)/sizeof(arr[0]);

	reorder(arr, index, n);

	cout << "Reorder array: "
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << "\nModified Index array: ";
	for(int i=0; i<n; i++)
		cout << index[i] << " ";

	return 0;
}