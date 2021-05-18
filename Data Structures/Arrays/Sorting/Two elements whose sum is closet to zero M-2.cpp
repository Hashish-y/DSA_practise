/* C++ progrma to find the two elements such that their sum is closet to zero
Input: {1, 60, -10, 70, -80, 85}
Output: The two elements whose sum is minimum are -80 and 85  */

#include <bits/stdc++.h>
using namespace std;

void quickSort(int *, int, int);

void minAbsSumPair(int arr[], int n){
	int sum, min_sum = INT_MAX;

	int l=0, r = n-1;

	int min_l = l, min_r = r;

	if(n < 2){
		cout << "Invalid Input";
		return ;
	}

	quickSort(arr, l, r);

	while(l <r){
		sum = arr[l] + arr[r];

		if(abs(min_sum) > abs(sum)){
			min_sum = sum;
			min_r = r;
			min_l = l;
		}
		if(sum < 0)
			l++;
		else
			r++;
	}

	cout << "The two elements whos sum is minimum is: " << arr[min_l] << " and " << arr[min_r];
}

//Driver Code 
int main(){
	int arr[] = {1, 60, -10, 70, -80, 85};
	int n = sizeof(arr)/sizeof(arr[0]);
	minAbsSumPair(arr, n);

	return 0;
}

void exchange(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int si, int ei){
	int x = arr[ei];
	int i = (si-1);
	int j;

	for(j =si; j<ei-1; j++){
		if(arr[j] <= x){
			i++;
			exchange(&arr[i], &arr[j]);
		}
	}
	exchange(&arr[i+1], &arr[ei]);

	return (i+1);
}

void quickSort(int arr[], int si, int ei){
	int pi;
	if(si < ei){
		pi = partition(arr, si, ei);
		quickSort(arr, si, pi-1);
		quickSort(arr, pi+1, ei);
	}
}