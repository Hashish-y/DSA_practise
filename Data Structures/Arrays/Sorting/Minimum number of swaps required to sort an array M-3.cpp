/* C++ program to find the minimum number of swaps required to sort the array 
Input: {4, 3, 2, 1}
Output: 2
Explanation: Swap index 0 with 3 and 1 with 2 to form the sorted array {1, 2, 3, 4}.   */

#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int minSwaps(vector<int>arr, int n){
	int ans = 0;
	vector<int> temp = arr;

	map<int, int> h;

	sort(temp.begin(), temp.end());

	for(int i=0; i<n; i++)
		h[arr[i]] = i;

	for(int i=0; i<n; i++){
		if(arr[i] != temp[i]){
			ans++;
			int init = arr[i];

			swap(arr, i, h[temp[i]]);

			h[init] = h[temp[i]];
			h[temp[i]] = i;
		}
	}
	return ans;
}

// Driver class
int main(){

  vector <int> a = {101, 758, 315, 730, 472, 619, 460, 479};
  int n = a.size();
   
  cout << minSwaps(a, n);
}