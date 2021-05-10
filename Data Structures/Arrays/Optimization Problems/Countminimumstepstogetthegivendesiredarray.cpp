/* C++ program to Count minimum steps to get the given desired array 
We can perform following operations on the array. 
1 ->Incremental operations:Choose 1 element from the array and increment its value by 1.
2 -> Doubling operation: Double the values of all the elements of array.
Input: target[] = {2, 3}
Output: 4
To get the target array from {0, 0}, we first increment both elements by 1 (2 operations), then double the array (1 operation). 
Finally increment second element (1 more operation)  */

#include <bits/stdc++.h>
using namespace std;

int countMinOperations(usigned int target[], int n){
	int result =0;

	while(1){
		int zero_count = 0;
		int i, j;
		if(target[i] & 1)
			break;
		else if(target[i] == 0)
			zero_count++;
	}
	if(zero_count == n)
		return result;

	if(i == n){
		for(it j=0; j<n; j++)
			target[j] = target[j]/2;
		result++;
	}

	for(int j=i; j<n; j++){
		if(target[j] & 1){
			target[j]--;
			result++;
		}
	}
}

int main(){
    unsigned int arr[] = {16, 16, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Minimum number of steps required to get the given target array is " << countMinOperations(arr, n);
    return 0;	
}