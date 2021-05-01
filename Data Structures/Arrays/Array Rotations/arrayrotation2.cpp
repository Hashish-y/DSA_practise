//C++ program to rotate an array
#include <iostream>
using namespace std;

//Finding GCD of a and b
int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

//Rotating the array[] by d
void leftRotate(int arr[], int d, int n){
	d=d%n;
	int gc_d=gcd(d, n);
	for(int i=0; i<gc_d; i++){
		int temp = arr[i];
		int j=i;
		while(1){
			int k=j+d;
			if(k>=n)
				k=k-n;
			if(k==i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	} 
}

//To print an array 
void printArray(int arr[], int size){
	for(int i=0; i<size; i++)
	    cout << arr[i] << " " ;
}

int main(){
	int arr[100], size;
	cout << "Enter the number of elements in the array: ";
	cin >> size;
	cout << "\nEnter "<< size <<"elements: ";
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}

	leftRotate(arr, 2, size);
	printArray(arr, size);
}