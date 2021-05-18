/*C++ program to find their union and intersection
Input : arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6} 
Output : Union : {1, 2, 3, 4, 5, 6, 7} 
         Intersection : {3, 5}   */

#include <bits/stdc++.h>
using namespace std;

void printUnion(int arr1[], int arr2[], int m, int n){
	int i, j;
	while(i<m && j<n){
		if(arr1[i] < arr2[j])
			cout << arr1[i++] << " ";

		else if (arr1[i] > arr2[j])
			cout << arr2[j++] << " ";
		else{
			cout << arr2[j++] << " ";
			i++;
		}
	}

	while(i <m)
		cout << arr1[i++] << " ";
	while(j<n)
		cout << arr2[j++] << " ";
}

//Driver Code
int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    printUnion(arr1, arr2, m, n);
 
    return 0;
}