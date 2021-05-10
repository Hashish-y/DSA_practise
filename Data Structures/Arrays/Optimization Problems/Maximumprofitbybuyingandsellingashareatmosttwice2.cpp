/* C++ program to find maximumpossible profit with at most two transactions
Input:   price[] = {10, 22, 5, 75, 65, 80}
Output:  87
Trader earns 87 as sum of 12, 75 
Buy at 10, sell at 22, 
Buy at 5 and sell at 80      */

#include <bits/stdc++.h>
using namespace std;

int main(){
	int price = { 2, 30, 15, 10, 8, 25, 80 };
	int n = sizeof(price)/sizeof(price[0]);

	int profit = 0;

	for(int i=1; i<n; i++){
		int sub = price[i] - price[i-1];
		if(sub > 0)
			profit +=sub;
	}
    
    cout << "Maximum profit: " << profit;

    return 0;

}

//This isn't correct for trading only twice, This approach is for trading can be done many times.
