/*C++ program to find the minum distance between two integers 
Input: arr[] = {2, 5, 3, 5, 4, 4, 2, 3}, 
x = 3, y = 2
Output: Minimum distance between 3 and 2 is 1.
Explanation:3 is at index 7 and 2 is at index 6, so the distance is 1   */

#include <bits/stdc++.h>
using namespace std;

int minDis(int arr[], int n, int x, int y){
	int p=-1, min_dis = INT_MAX;
	for(int i=0; i<n; i++){
		if(arr[i] == x || arr[i] ==y){
			if(p != -1 && arr[i] != arr[p])
				min_dis = ,min(min_dis, i-p);

			p=i;
		}
	}

	if(min_dis == INT_MAX)
		return -1;

	return min_dis;
}

//Driver Code 
int main(){
	int arr[] = {3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
}