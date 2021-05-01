/* C++ program to arrange +ve elements at even and -ve at odd Positions 
Input : arr[] = {1, -3, 5, 6, -3, 6, 7, -4, 9, 10}
Output : arr[] = {1, -3, 5, -3, 6, 6, 7, -4, 9, 10}   */

#include <iostream>
using namespace std;

//Swap function 
void swap(int* a, int i, int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp ;
	return ;
}

//Function to Print array 
void printArray(int* a, int n){
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}

//Driver Code 
int main(){
	int arr[] = {1, -3, 5, 6, -3, 6, 7, -4, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Original array: " << printArray(arr, n);

	for(int i=0; i<n; i++){
		if(arr[i] >=0 && i%2 == 1){
			for(int j=i+1; j<n; j++){
				if(arr[j] < 0; j%2 == 0){
					swap(arr, i, j);
					break;
				}
			}
		}

		else if(arr[i] <0 && i % 2 ==0){
			for(int j=i+1; j<n; j++){
				if(arr[j] >= 0 && j%2 ==1){
					swap(arr, i, j);
					break;
				}
			}
		}
	}

	cout << "\nAfter rearrangimg: " << printArray(arr, n);
    
    return 0;
}
