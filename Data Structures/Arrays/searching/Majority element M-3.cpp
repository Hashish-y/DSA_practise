/* C++ program to find the majority element 
A majority element in an array A[] of size n is an element that appears more than n/2 times 
Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater than the half of the size of the array size. */

#include <bits/stdc++.h>
using namespace std;

int findCanditate(int arr[], int n){
	int maj_index =0, count =1;
	for(int i=1; i<n; i++){
		if(arr[maj_index] == arr[i])
			count++;
		else
			count--;
		if(count == 0){
			maj_index = i;
			count = i;
		}
	}
	return arr[maj_index];
}

bool isMajority(int arr[], int n, int cand){
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == cand)
            count++;

    if (count > n / 2)
        return 1;
 
    else
        return 0;
}
 
void printMajority(int arr[], int n){
    int cand = findCandidate(arr, n);
 
    if (isMajority(arr, n, cand))
        cout << " " << cand << " ";
 
    else
        cout << "No Majority Element";
}
 
//Driver Code
int main(){
    int arr[] = { 1, 3, 3, 1, 2 };
    int n = (sizeof(arr)) / sizeof(a[0]);
 
    printMajority(arr, n);
 
    return 0;
}