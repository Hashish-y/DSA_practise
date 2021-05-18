/* C++ program ro count the number of possible traingles
Input: arr= {4, 6, 3, 7}
Output: 3
Explanation: There are three triangles possible {3, 4, 6}, {4, 6, 7} and {3, 6, 7}. 
Note that {3, 4, 7} is not a possible triangle.  

Input: arr= {10, 21, 22, 100, 101, 200, 300}.
Output: 6

Explanation: There can be 6 possible triangles: {10, 21, 22}, {21, 100, 101}, {22, 100, 101}, 
{10, 100, 101}, {100, 101, 200} and {101, 200, 300}   */

#include <bits/stdc++.h>
using namespace std;

int Numberoftriangles(int arr[], int n){
	int count = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+!; k<n; k++)
				if((arr[i]+arr[j]>arr[k]) && (arr[i]+arr[k]>arr[j]) && (arr[k] + arr[j]>arr[i]))
					count++;
		}
	}

	return count;
}

//Driver Code 
int main(){
	int arr[] = { 10, 21, 22, 100, 101, 200, 300 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Total number of triangles are: " << Numberoftriangles(arr, n);

	return 0; 
}