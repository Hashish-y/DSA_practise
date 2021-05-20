/* C++ program to find the leader in an array
An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2  */

#include <iostream>
using namespace std;
 
/*C++ Function to print leaders in an array */
void printLeaders(int arr[], int size){
    for (int i = 0; i < size; i++){
        int j;
        for (j = i+1; j < size; j++){
            if (arr[i] < arr[j])
                break;
        }   
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
  }
}
 
//Driver Code
int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Leaders in an array: ";
    printLeaders(arr, n);
    return 0;
}