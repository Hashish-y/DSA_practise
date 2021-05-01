//C++ program to rearrange the elements in array such that even positined are greater than odd indexed elemnts !!!!
/*Input : A[] = {1, 2, 2, 1}
Output :  1 2 1 2 */

#include <bits/stdc++.h>
using namespace std;

//Function to Assign the rearranged array with another array 
void assign(int arr[], int n){
	//sorting the array 
	sort(arr, arr+n);

	int ans[n]; //To store the rearranged array in an array !!
	int p= 0, q = n-1;

	for(int i=0; i<n; i++){
		//Assign even indexes with maximum elements 
		if((i+1)%2 == 0)
			ans[i] = arr[q--];

		//Assign odd indexes with remaining elements 
		else
			ans[i] = arr[p++];
	}

	cout << "Rearranged array is: " ;

	//Printing array 
	for(int i=0; i<n; i++)
		cout << ans[i] << " ";
}

//Driver Code 
int main(){
	int arr[] = {1,3,2,2,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	assign(arr, n);

	return 0;
}