//C++ program to check if array has 2 elments that equal to given value
#include <bits/stdc++.h>
using namespace std;

//Function to check the given statement: 
bool hasArrayTwoCanditates(int A[], int arr_size, int sum){
	int l, r;
    //Sort the elements
    sort(A, A+arr_size);

    l=0;
    r = arr_size-1;
    while(l<r){
    	if(A[l]+A[r] == sum)
    		return 1;
    	else if(A[l]+A[r] < sum)
    		l++;
    	else
    		r--;
    }
    return 0;
}

//Driver Code
int main() {
	int A[] = {1,45,34,23,43,6};
	int n = 44;
	int arr_size = sizeof(A)/sizeof(A[0]);

	if(hasArrayTwoCanditates(A, arr_size, n))
		cout << "Array has elements with given sum";
	else
		cout << "Array doesn't have elemnts with given sum";

	return 0;
}