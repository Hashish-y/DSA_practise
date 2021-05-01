//C++ program to arrange the array such that arr[i] = i
#include <bits/stdc++.h>
using namespace std;

//Function to rearrange an array
void fixarray(int arr[], int len){
	for(int i=0; i<len; i++){
		if(arr[i] != -1 && arr[i] != i){
			int x = arr[i];
            
            //Checking if desired place is not vacate
			while(arr[i] != -1 && arr[i] != x){
				//store the value 
				int y = arr[x];
                
                //place the x to its correct position
				arr[x] = x;
                
                //now x=y, search for x
				x = y;
			}
			//place the x to its correct position
			arr[x] = x;
            
            //Check if while loop hasn't set the correct value at arr[i]
			if(arr[i] != i)
				//If not replace it with -1
				arr[i] = -1;
		}
	}
}

//Driver Code 
int main(){
	int arr[] ={1,2,-1,3,4,7,89,9,8};
	int len = sizeof(arr)/sizeof(arr[0]);

	fixarray(arr, len);

	for(int i=0; i<len; i++)
		cout << arr[i] << " ";

	return 0;
}

/*Approach of the code(Given in Geeks for Geeks)
1. Nav­i­gate through the array. 
2. Check if a[i] = -1, if yes then ignore it. 
3. If a[i] != -1, Check if element a[i] is at its cor­rect posi­tion (i=A[i]). If yes then ignore it. 
4. If a[i] != -1 and ele­ment a[i] is not at its cor­rect posi­tion (i!=A[i]) then place it to its correct posi­tion, but there are two conditions:  

Either A[i] is vacate, means A[i] = -1, then just put A[i] = i .
OR A[i] is not vacate, means A[i] = x, then int y=x put A[i] = i. Now, we need to place y to its cor­rect place, so repeat from step 3.*/