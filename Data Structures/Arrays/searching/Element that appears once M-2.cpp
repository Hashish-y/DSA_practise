/*C+ program to fins the element that appears once in an array where every other element appears twice
Input:  ar[] = {7, 3, 5, 4, 5, 3, 4}
Output: 7   */

#include <bits/stdc++.h>
using namespace std;

int singleNumber(int arr[], int n){
	map<int, int> m;
	long sum1=0, sum2=0;

	for(int i=0; i<n; i++){
		if(m[arr[i]] == 0){
			sum1 += arr[i];
			m[arr[i]]++;
		}
		sum2 += arr[i];
	}

	return 2*(sum1) - sum2;
}

//Driver Code 
int main(){
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = 7;
    cout << singleNumber(arr,n) << "\n";
 
    int b[] = {15, 18, 16, 18, 16, 15, 89};
 
    cout << singleNumber(b,n);
    return 0;	
}