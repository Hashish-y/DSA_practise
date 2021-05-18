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

int comp(const void *a, const void* b){
	return *(int*)a > *(int*)b;
}

int NumberOfTriangles(int arr[], int n){
	qsort(arr, n, sizeof(arr[0]), comp);

	int count =0;

	for(int i=0; i<n-1; i++){
		int k =i+2;

		for(int j=i+1; j<n; j++){
			while(k<n && (arr[i] + arr[j] > arr[k]))
				k++;
			if(k>j)
				count += k-j-1;
		}
	}

	return count;
}

// Driver code
int main(){
    int arr[] = { 10, 21, 22, 100, 101, 200, 300 };
    int size = sizeof(arr)/sizeof(arr[0]);
 
    cout << "Total number of triangles possible is: " << NumberOfTriangles(arr, size);
 
    return 0;
}