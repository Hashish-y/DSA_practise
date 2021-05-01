//C++ program to rearrange +ve and -ve integers in alternative while keeping the order of +ve and -ve numbers 

#include <assert.h>
#include <iostream>
using namespace std;

//Utility function to right rotate all elemnts between 
void rightRotate(int arr[], int n, int outofplace, int cur){
	char tmp = arr[cur];
	for(int i=cur; i>outofplace; i--)
		arr[i] = arr[i-1];
	srr[outofplace] = tmp;
}

void rearrange(int arr[], int n){
	int outofplace = -1;
	for(int index =0; index <n; index++){
		if(outofplace >= 0){
			//Find 
		}
	}
}