/* C++ program to find the majority element 
A majority element in an array A[] of size n is an element that appears more than n/2 times 
Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater than the half of the size of the array size. */

#include <bits/stdc++.h>
using namespace std;

void findMajority(int arr[], int n) {
    int maxCount = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
 
    if (maxCount > n / 2)
        cout << arr[index] << endl;
 
    else
        cout << "No Majority Element" << endl;
}
 
// Driver code
int main(){
    int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMajority(arr, n);
 
    return 0;
}