/* C++ progrma to find the two elements such that their sum is closet to zero
Input: {1, 60, -10, 70, -80, 85}
Output: The two elements whose sum is minimum are -80 and 85  */

#include <bits/stdc++.h>
using namespace std;

bool compare(int x, int y){
	return abs(x) < abs(y);
}

void finMinSum(int arr[], int n){
	sort(arr, arr, compare);
	int min = MIN+MAX, x, y;
	for(int i=1; i<n; i++){
		if(abs(arr[i-1]+arr[i] <= min)){
			min = abs(arr[i-1]+arr[i]);
			x = i-1;
			y = i;
		}
	}

	cout << "Two elements whose sum is minimum is: " << arr[x] << " and " << arr[y];
}

//Driver Code 
int main(){
    int arr[] = { 1, 60, -10, 70, -80, 85 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinSum(arr, n);
    return 0;

}