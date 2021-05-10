/* C++ program to find minimum number of jumps to reach end 
Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3 (1-> 3 -> 8 -> 9)

Explanation: Jump from 1st element to 2nd element as there is only 1 step, now there are three options 5, 8 or 9. 
If 8 or 9 is chosen then the end node 9 can be reached. So 3 jumps are made. */

#include <bits/srdc++.h>
using namespace std;

int minJumps(int arr[], int n){
	int *jumps = new int[n];
	int i, j;

	if(n==0 || n==1)
		return INT_MAX;

	jumps[0]=0;
    // Find the minimum number of jumps to reach arr[i]
    // from arr[0], and assign this value to jumps[i]
    for (i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            }
        }
    }
    return jumps[n - 1];	
}

//Driver Code 
int main(){
	int arr[] =  { 1, 3, 6, 1, 0, 9 };
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "Minimum number of jumps: " << minJumps(arr, n);
	return 0;
}