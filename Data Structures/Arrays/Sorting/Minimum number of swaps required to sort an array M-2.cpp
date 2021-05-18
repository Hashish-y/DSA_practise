/* C++ program to find the minimum number of swaps required to sort the array 
Input: {4, 3, 2, 1}
Output: 2
Explanation: Swap index 0 with 3 and 1 with 2 to form the sorted array {1, 2, 3, 4}.   */

#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
int indexOf(vector<int> &arr, int ele){
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}
 
int minSwaps(vector<int> arr, int N) {
    int ans = 0;
    vector<int> temp(arr.begin(),arr.end());
    sort(temp.begin(),temp.end());
     
    for(int i = 0; i < N; i++) {

        if (arr[i] != temp[i]){
            ans++;

            swap(arr, i, indexOf(arr, temp[i]));
        }
    }
    return ans;
}
 
// Driver Code
int main() {
 
    vector<int> a = {101, 758, 315, 730,
                   472, 619, 460, 479};
     
    int n = a.size();
     
    // Output will be 5
    cout << minSwaps(a, n);
}