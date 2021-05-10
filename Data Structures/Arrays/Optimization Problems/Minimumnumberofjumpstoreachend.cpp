/* C++ program to find minimum number of jumps to reach end 
Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3 (1-> 3 -> 8 -> 9)

Explanation: Jump from 1st element to 2nd element as there is only 1 step, now there are three options 5, 8 or 9. 
If 8 or 9 is chosen then the end node 9 can be reached. So 3 jumps are made. */

#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
	if(n==1)
		return 0;

	int res = INT_MAX;

	for(int i=n-2; i>=0; i--){
		if(i+arr[i] >= n-1){
			int sub_res = minJumps(arr, i+1);
			if(sub_res != INT_MAX)
				res = min(res, sub_res);
		}
	}

	return res;
}

//Driver Code 
int main(){
	int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Minimum number of jumps: " << minJumps(arr, n);
	
	return 0;
}