//C++ program to rearrange +ve and -ve number in order

#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
	//swap not needed
	if((a>0 && b>0) || (a<0 && b<0) || (a>0 && b<0))
		return false;

	//swap needed
	if(a<0 && b>0)
		return true;

	//swap not needed
	if((a==0 && b<0) || (a>0 && b==0))
		return false;

	//swap needed
	if((a==0 && b>0) || (a<0 && b==0))
		return true;
}

void rearrange(int arr[], int n){
	sort(arr, arr+n, comp);
}

//Driver Code
int main(){
	int arr[] = {-3, -12, -2, 0, 1, 14, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    rearrange(arr, n);

    for(int i=0; i<n; i++)
    	cout << arr[i] << " ";

    return 0;
}