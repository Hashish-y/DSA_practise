/* C++ program to minimum product of k integers in an array of +ve numbers
Input : 198 76 544 123 154 675
         k = 2
Output : 9348
Explanation: We get minimum product after multiplying
76 and 123   */

#include <bits/stdc++.h>
using namespace std;

int minProduct(int arr[], int n, int k){
	priority_queue<int, vector<int>, greater<int> > pq;
	for(int i=0; i<n; i++)
		pq.push(arr[i]);

	int count = 0, ans = 1;

	while(pq.empty() == false && count < k){
		ans = ans*pq.top();
		pq.pop();
		count++;
	}

	return ans;
}

//Driver Code
int main(){
	int arr[] = {198, 76, 544, 123, 154, 675};
	int k = 2;
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Minimum product: " << minProduct(arr, n, k);

	return 0;
}