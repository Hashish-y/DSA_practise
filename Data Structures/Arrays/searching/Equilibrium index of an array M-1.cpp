/* C++ program to find equilibrium index of an array 
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes
Input: A[] = {-7, 1, 5, 2, -4, 3, 0} 
Output: 3 
3 is an equilibrium index, because: A[0] + A[1] + A[2] = A[4] + A[5] + A[6]  */

#include <bits/stdc++.h>
using namespace std;
 
int equilibrium(int arr[], int n){
    int i, j;
    int leftsum, rightsum;

    for (i = 0; i < n; ++i){    
 
        leftsum = 0;
        for (j = 0; j < i; j++)
            leftsum += arr[j];
 
        rightsum = 0;
        for (j = i + 1; j < n; j++)
            rightsum += arr[j];

        if (leftsum == rightsum)
            return i;
    }
 
    return -1;
}
 
// Driver code
int main(){
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout <<"Equilibrium index: " << equilibrium(arr, arr_size);

    return 0;
}