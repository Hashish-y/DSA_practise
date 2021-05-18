/* c++ program to sort an array in wave form 
An array ‘arr[0..n-1]’ is sorted in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
 Input:  arr[] = {10, 5, 6, 3, 2, 20, 100, 80}
 Output: arr[] = {10, 5, 6, 2, 20, 3, 100, 80} OR
                 {20, 5, 10, 2, 80, 6, 100, 3} OR
                 any other array that is in wave form

 Input:  arr[] = {20, 10, 8, 6, 4, 2}
 Output: arr[] = {20, 8, 10, 4, 6, 2} OR
                 {10, 8, 20, 2, 6, 4} OR
                 any other array that is in wave form  */

#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sortInWave(int arr[], int n){
	sort(arr, arr+n);
	for(int i=0; i<n-1; i+=2)
		swap(&arr[i], &arr[i+1]);
}

//Driver Code 
int main(){
    int arr1[] = {10, 90, 49, 2, 1, 5, 23};
    int n1= sizeof(arr1)/sizeof(arr1[0]);
    
    cout << "Wave form for {10, 90, 49, 2, 1, 5, 23}: ";
    sortInWave(arr1, n1);
    for (int i=0; i<n1; i++)
       cout << arr1[i] << " ";

    cout << endl;
    int arr2[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Wave form for {10, 5, 6, 3, 2, 20, 100, 80}: " ;
    sortInWave(arr2, n2);
    for (int i=0; i<n2; i++)
       cout << arr2[i] << " ";
    cout << endl;

    return 0;
}