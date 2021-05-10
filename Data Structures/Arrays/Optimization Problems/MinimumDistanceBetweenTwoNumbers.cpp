/*C++ program to find the minum distance between two integers 
Input: arr[] = {2, 5, 3, 5, 4, 4, 2, 3}, 
x = 3, y = 2
Output: Minimum distance between 3 and 2 is 1.
Explanation:3 is at index 7 and 2 is at index 6, so the distance is 1   */

#include <bits/stdc++.h>
using namespace std;

int minDistance(int arr[], int n, int x, int y){
	int min_dis = INT_MAX;
	for (int i = 0; i < n; i++){
		for(int j=i+1; j<n; j++){
			if( (x == arr[i] && y == arr[j] ||y == arr[i] && x == arr[j]) && min_dis > abs(i-j))
				min_dis = abs(j-i);
		}
	}

	return min_dis;
}

int main(){
	int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=3, y=6;

    cout << "Minimum distance between " << x << " and " << y << " is:" << minDistance(arr, n, x, y) << endl;

	return 0;
}