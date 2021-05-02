/* C++ program to find mean and median of an unsorted array 
Input  : a[] = {1, 3, 4, 2, 6, 5, 8, 7}
Output : Mean = 4.5
         Median = 4.5  */

#include <bits/stdc++.h>
using namespace std;

//Function to find mean 
double findMean(int arr[], int n){
	int sum =0;
	double mean; 
	for(int i=0; i<n; i++)
		sum+=arr[i];

	mean = (double)sum/(double)n;
	return mean;
}

//Function to find median 
double findMedian(int arr[], int n){
	sort(arr, arr+n);
	if(n%2 == 0)
		return(double)arr[n/2];
	else
		return (double)(arr[(n-1)/2]+arr[(n+1)/2])/2.0;
}

//Driver Code 
int main(){
	int arr[] = { 1, 3, 4, 2, 7, 5, 8, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Mean: " << findMean(arr, n) << endl;
	cout << "Median: " << findMedian(arr, n) << endl;

	return 0;
}