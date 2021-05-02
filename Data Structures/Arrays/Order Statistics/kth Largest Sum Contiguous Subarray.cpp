/* C++ program to find kth largest sum contiguous subarray
Input: a[] = {20, -5, -1} 
         k = 3
Output: 14
Explanation: All sum of contiguous 
subarrays are (20, 15, 14, -5, -6, -1) so the 3rd largest sum is 14  */
#include <bits/stdc++.h>
using namespace std;
 
int kthLargestSum(int arr[], int n, int k) {

    int sum[n + 1];
    sum[0] = 0;
    sum[1] = arr[0];
    for (int i = 2; i <= n; i++)
        sum[i] = sum[i - 1] + arr[i - 1];
 
    priority_queue<int, vector<int>, greater<int> > Q;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int x = sum[j] - sum[i - 1];
            if (Q.size() < k)
                Q.push(x);
            else {
                if (Q.top() < x){
                    Q.pop();
                    Q.push(x);
                }
            }
        }
    }
    return Q.top();
}
 
// Driver program to test above function
int main() {
    int a[] = { 10, -10, 20, -40 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 6;
 
    cout << kthLargestSum(a, n, k);
    return 0;
}