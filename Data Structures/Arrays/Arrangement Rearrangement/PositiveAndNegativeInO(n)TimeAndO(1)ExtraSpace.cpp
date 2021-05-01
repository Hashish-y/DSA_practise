/*C++ program to rearrange positive and negative numbers accordingly:
Rearrange the array elemnets so that +ve and -ve numbers are placed alternatively. Number of +ve and -ve need not to be same,
If that the case the extra numbers will be arranged at last */

#include <bits/stdc++.h>
using namespace std;

class GFG{
public:
	void rearrange(int [], int);
	void swap(int *, int *);
	void printArray(int [], int);
};

//Main Function that puts +ve number at even indexes and _ve numbers at odd indexes
void GFG :: rearrange(int arr[], int n){
	//Take 0 as pivot and and dividing the array around it 
	int i = -1;
	for(int j=0; j<n; j++){
		if(arr[j] < 0){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}

	//Now all +ve numbers at end and -ve numbers at the beginning of array.
	int pos = i+1, neg = 0;

	/*Increament the negative index by 2 and positive index by 1,
	i.e., swap every alternative negative number with next +ve number.*/

	while(pos < n && neg < pos && arr[neg] < 0){
		swap(&arr[neg], &arr[pos]);
		pos++;
		neg += 2;
	}
}

//Function to swap elemnts 
void GFG :: swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Function to print array 
void GFG :: printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
}

//Driver Code 
int main(){
	int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	GFG test;
	test.rearrange(arr, n);
	test.printArray(arr, n);

	return 0;
}