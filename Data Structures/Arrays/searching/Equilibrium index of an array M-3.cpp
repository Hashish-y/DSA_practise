/* C++ program to find equilibrium index of an array 
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes
Input: A[] = {-7, 1, 5, 2, -4, 3, 0} 
Output: 3 
3 is an equilibrium index, because: A[0] + A[1] + A[2] = A[4] + A[5] + A[6]  */

#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n){
	if(n==1)
		return (0);
	int forward[n] = {0};
	int rev[n] = {0};

	for(int i=0; i<n; i++){
		if(i)
			forward[i] = forward[i-1] + arr[i];
		else
			forward[i] = arr[i];
	}

	for(int i=n-1; i>0; i--){
		if(i<=n-2)
			rev[i] = rev[i-1] + arr[i];
		else
			rev[i] = arr[i];
	}

    for (int i = 0; i < n; i++) {
        if (forward[i] == rev[i])
            return i;
    }

    return -1;	
}

//Driver Code 
int main() {
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "First Point of equilibrium is at index " << equilibrium(arr, n) << "\n";
    
    return 0;
}