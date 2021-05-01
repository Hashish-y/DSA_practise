//C++ program to move -ve numbers at left and +ve numbers at right 

/*Input :  arr[] = [12, 11, -13, -5, 6, -7, 5, -3, -6]
Output : arr[] = [-13, -5, -7, -3, -6, 12, 11, 6, 5]*/

#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}

void rearrange(int arr[], int start, int end){
	//To end the 
	if(start == end)
		return;

	//rearrange the array except the first elemnt in each recursive call
	rearrange(arr, (start+1), end);

	if(arr[start] >= 0){
		reverse(arr, (start+1), end);
		reverse(arr, start, end);
	}
}

void printArray(int arr[], int n){
	cout << "[";
	for(int i=0; i<n; i++){
		cout << arr[i];
		if(i < (n-1))
			cout << ", ";
		else
			cout << "]" << endl;
	}
}


//Driver Code 
int main(){
	int arr[] = {-12, -11, -13, -5, -6, 7, 5, 3, 6};
	int length = sizeof(arr)/sizeof(arr[0]);
	int countNeg = 0;

	for(int i=0; i<length; i++){
		if(arr[i] < 0)
			countNeg;
	}

	cout << "array ";
	printArray(arr, length);
	rearrange(arr, 0, (lrngth-1));

	reverse(arr, countNeg, (length-1));

	cout << "rearranged array: ";
	printArray(arr, length);

	return 0;
}