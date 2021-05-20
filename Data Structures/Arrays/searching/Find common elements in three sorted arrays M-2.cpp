/* C++ program to find common elements in three sorted arrays 
Input: 
ar1[] = {1, 5, 10, 20, 40, 80} 
ar2[] = {6, 7, 20, 80, 100} 
ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
Output: 20, 80   */

#include <bits/stdc++.h>
using namespace std;

void findCommon(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3){
	int i=0, j=0, k=0;
	int prev1, prev2, prev3;

	prev1 = prev2 = prev3 = INT_MIN;
	while(i<n1 && j<n2 && k<n3){
		while(arr1[i] == prev1 && i<n1)
			i++;
		while(arr2[i] == prev2 && i<n2)
			j++;
		while(arr3[i] == prev3 && i<n3)
			k++;

		if(arr1[i] ==arr2[j] && arr2[j] == arr3[k]){
			cout << arr1[i] << " ";

			prev1 = arr1[i];
			prev2=arr2[j];
			prev3 = arr3[k];
			i++; j++; k++;
		}	

		else if(arr1[i] < arr2[j]){
			prev1 = arr1[i];
			i++;
		}

		else if(arr2[j] , arr3[k]){
			prev2 = arr2[j];
			j++;
		}
		else{
			prev3 = arr3[k];
			k++;
		}
	}
}
// Driver code
int main(){
    int arr1[] = { 1, 5, 10, 20, 40, 80, 80 };
    int arr2[] = { 6, 7, 20, 80, 80, 100 };
    int arr3[] = { 3, 4, 15, 20, 30, 70, 80, 80, 120 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
 
    cout << "Common Elements are ";
    findCommon(arr1, arr2, arr3, n1, n2, n3);
    return 0;
}