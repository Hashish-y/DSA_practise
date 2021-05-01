//C++ program to print reverse array or string
#include <iostream>
using namespace std;

//Function to reverse array[] 
void reverseArray(int arr[], int start, int end){
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

//Function to print array
void printArray(int arr[], int n){
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << end;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n =sizeof(arr)/sizeof(arr[0]);

	cout << "Entered array is: " << printArray(arr, n);

	reverseArray(arr, n);

	cout << "Reversed array: " << printArray(Arr, n);
	return 0;
}