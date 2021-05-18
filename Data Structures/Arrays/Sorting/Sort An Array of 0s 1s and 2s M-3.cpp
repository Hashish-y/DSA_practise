/*C++ program to sort an array of 1s 2s and 0s
Input :  {0, 1, 2, 0, 1, 2}
Output : {0, 0, 1, 1, 2, 2}

Input :  {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output : {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}    */

#include <bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n){
	int i, count0=0, count1=0, count2=0;

	for(int i=0; i<n; i++){
		switch(arr[i]){
			case 0:
			    count0++;
			    break;
			case 1:
			    count1++;
			    break;
			case 2:
			    count2++;
			    break;
		}
	}
    
    i=0;

    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }
 
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }
 
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }
}

int main(){
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr)/sizeof(arr[0]);

	sortArr(arr, n);
    
    cout << "After sorting: ";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << endl;

	return 0;
}