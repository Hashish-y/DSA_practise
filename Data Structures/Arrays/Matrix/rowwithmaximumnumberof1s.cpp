/*C++ program to find the row with maximum number of 1s
Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Output: 2 */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int  r=0;
	    int c = m-1;
	    int maxrowind = -1;
	    
	    while(r<n && c>=0){
	        if(arr[r][c] == 1){
	            maxrowind = r;
	            c--;
	        }
	        else{
	            r++;
	        }
	    }
	    return maxrowind;
	}

};

//Driver Code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
