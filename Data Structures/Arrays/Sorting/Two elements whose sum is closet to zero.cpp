/* C++ progrma to find the two elements such that their sum is closet to zero
Input: {1, 60, -10, 70, -80, 85}
Output: The two elements whose sum is minimum are -80 and 85  */

#include <bits/stdc++.h>
using namespace std;

void minAbsSumPair(int arr[], int n){
	int inv_count = 0;
	int l, r, min_sum, min_l=0, min_r=1;

	if(n <2){
		cout << "Invalid Input" ;
		return;
	}

	min_sum = arr[0] +arr[1];

	for(l =0; l<n-1; l++){
		for(r = l+1; r < n; r++){
			int sum = arr[l] + arr[r];
			if(abs(min_sum) > abs(sum)){
				min_sum = sum;
				min_l = l;
				min_r = r;
			}
		}
	}

	cout << "The two elements whose sum is minimum is: " << arr[min_l] << " and " << arr[min_r] ;
}

//Driver Code 
int main(){
	int arr[] = {1, 60, -10, 70, -80, 85};
	int n = sizeof(arr)/sizeof(arr[0]);
	minAbsSumPair(arr, n);

	return 0;
}