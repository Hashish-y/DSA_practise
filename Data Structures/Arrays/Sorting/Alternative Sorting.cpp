/* C++ program to print the array in a such a way that the first element is first max and 2nd element is 1st min and so on 
Input : arr[] = {7, 1, 2, 3, 4, 5, 6}
Output : 7 1 6 2 5 3 4

Input : arr[] = {1, 6, 9, 4, 3, 7, 8, 2}
Output : 9 1 8 2 7 3 6 4    */

#include <bits/stdc++.h>
using namespace std;

//Function to print the required
void alternativeSort(int arr[], int n){
	sort(arr, arr+n);

	int i=0, j=n-1;
	while(i < j){
		cout << arr[j--] << " ";
		cout << arr[i++] << " ";
	}

	if(n %2 != 0)
		cout << arr[i];
}

//Driver Code 
int main(){
	int arr[] =  {1, 12, 4, 6, 7, 10};
	int n = sizeof(arr)/sizeof(arr[0]);

	alternativeSort(arr, n);

	return 0;
}