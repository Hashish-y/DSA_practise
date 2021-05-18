/* C++ program to sort an array containing two types of elements 
Input :  arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
Output : arr[] = [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 
Input :  arr[] = [1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1] 
Output : arr[] = [0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1]   */

#include <bits/stdc++.h>
using namespace std;

void segregrate(int arr[], int n){
	int type0 =0, type1 =n-1;
	while(type0 < type1){
		if(arr[type0] == 1){
			swap(arr[type0], arr[type1]);
		    type1--;
	    }
	    else
		    type0++;
    }
}

//Drivr Code
int main(){
	int arr1[] = { 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1 };
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	segregrate(arr1, n1);
	cout << "After sorting of {1,1,1,0,1,0,0,1,1,1,1}: " ;
	for(int a: arr1)
		cout << a << " " ;
    
	int arr2[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	segregrate(arr2, n2);
	cout << "\nAfter sorting of {0,1,0,1,0,0,1,1,1,0}: " ;
	for(int a: arr2)
		cout << a << " " ;	
}