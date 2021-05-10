/* C++ program to find the smallest with sum greater than a given value
arr[] = {1, 4, 45, 6, 0, 19}
   x  =  51
Output: 3
Minimum length subarray is {4, 45, 6}  */

#include <iostream>
using namespace std;

int smallestSubArrayWithSum(int arr[], int n, int x){
	int min_length = n+1;

	for(int start=0; start <n; start++){
		int curr_sum = arr[start];

		if(curr_sum > x)  return 1;

		for(int end=start+1; end<n; end++){
			curr_sum+=arr[end];

			if(curr_sum > x && (end-start+1) < min_length)
				min_length = (end-start+1);
		}
	}

	return min_length;
}

//Driver Code
int main(){
	int arr1[] = {1, 4, 45, 6, 10, 19};
	int x = 51;
	int n1= sizeof(arr1)/sizeof(arr1[0]);
	int result_1 = smallestSubArrayWithSum(arr1, n1, x);
	(result_1 == n1+1) ? cout << "Not possible\n" : cout << "Length of smallest sub array: " << result_1 << endl;

    int arr2[] = {1, 10, 5, 2, 7};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    x  = 9;
    int res2 = smallestSubArrayWithSum(arr2, n2, x);
    (res2 == n2+1)? cout << "Not possible\n" : cout <<"Length of smallest sub array: " << res2 << endl;
 
    int arr3[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    x  = 280;
    int res3 = smallestSubArrayWithSum(arr3, n3, x);
    (res3 == n3+1)? cout << "Not possible\n" : cout << "Length of smallest sub array: " << res3 << endl;
 
    return 0;
}