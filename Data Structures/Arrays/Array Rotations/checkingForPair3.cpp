//C++ program to find the pair whose sum is equal to the given value 
#include <bits/stdc++.h>
using namespace std;

//Function to print pairs
void printPairs(int arr[], int n, int x){
	int rem[x];
	for(int i=0; i<x; i++){
		rem[i]=0; // Initializing alll values of remainders as 0
	}
	for(int i=0; i<n; i++){
		if(arr[i]<x){
			//as numbers > x can't be used to get a sum x.
			rem[arr[i]%x]++;
		}
	}

	for(int i=1; i<x/2; i++){
		if(rem[i]>0 && rem[i-1]>0){
			cout << "Yes" << endl;
			break;
		}
	}

	//Once we reach middle of middle array, wehave to do operations based on x
	if(i>=x/2){
		if(x%2=0){
			if(rem[x/2]>1){
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
		else{
			if(rem[x/2]>0 && rem[x-x/2] >0)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
}

//Driver Code
int main(){
	int arr[] = {1,4,6,34,12,76};
	int n = 7;
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	printPairs(arr, arr_size, n);

	return 0;
}