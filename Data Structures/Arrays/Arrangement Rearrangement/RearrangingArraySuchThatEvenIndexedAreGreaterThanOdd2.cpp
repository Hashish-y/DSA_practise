//C++ program to rearrange the elements in the array such that even positioned are greater than odd positioned elements 

/*Input : A[] = {1, 2, 2, 1}
Output :  1 2 1 2*/

#include <bits/stdc++.h>
using namespace std;

//swap two elements 
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Function to rearrange the elements as per requirement 
void rearrange(int arr[], int n){
	for(int i=1; i<n; i++){
		//If index is even 
		if( i%2 ==0 ){
			if(arr[i] > arr[i-1])
				swap(&arr[i-1], &arr[i]);
		}
		else {
			if(arr[i] < arr[i-1])
				swap(&arr[i-1], &arr[i]);
		}
	}

	cout << "After rearranging: ";
	for(int i=0; i<n; i++)
		cout << arr[i] < " ";
}

int main(){
	int arr[] = {1,3,2,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr n);

    return 0;


}