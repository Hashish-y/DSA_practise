//C++ program to find sum of contigious sub array that has largest sum 
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n){
	int max_so_far = INT_MIN, max_ending_here = 0, start =0, end =0, s=0;
	for(int i=0; i<n; i++){
		max_ending_here += arr[i];
		if(max_so_far < max_ending_here){
			max_so_far = max_ending_here;
			start = s;
			end =i;
		}

		if(max_ending_here < 0){
			max_ending_here = 0;
			s=i+1;
		}
	}

	cout << "Maximum contigious sum is: " << max_so_far << endl;
	cout << "Indexes: (" << start << ", " << end << ")" << endl;
    
    return 0;
}

//Driver Code 
int main(){
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(arr)/sizeof(arr[0]);

	int max_sum = maxSubArraySum(arr, n);

	return 0;

}