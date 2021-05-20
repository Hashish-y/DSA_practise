/* C++ program to find the majority element 
A majority element in an array A[] of size n is an element that appears more than n/2 times 
Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater than the half of the size of the array size. */

#include <bits/stdc++.h>
using namespace std;

void findMajority(int arr[], int n){
	unordered_map<int, int> m;

	for(int i=0; i<n; i++)
		m[arr[i]]++;

	int count = 0;
	for(auto i:m){
        if(i.second > n / 2){
            count =1;
            cout << "Majority found: " << i.first<<endl;
            break;
        }
	}

	if(count ==0)
		cout << "No Majority element" << endl;
}

//Driver Code 
int main(){
	int arr[] = {2, 2, 2, 2, 5, 5, 2, 3, 3};
	int n = sizeof(arr)/sizeof(arr[0]);

	findMajority(arr, n);

	return 0;
}