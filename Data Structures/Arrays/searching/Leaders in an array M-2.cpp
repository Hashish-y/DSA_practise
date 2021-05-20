/* C++ program to find the leader in an array
An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 
For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2  */

#include <iostream>
using namespace std;
 
void printLeaders(int arr[], int size) {
    int max_from_right =  arr[size-1];
 
    cout << max_from_right << " ";
     
    for (int i = size-2; i >= 0; i--) {
        if (max_from_right <= arr[i]) {          
            max_from_right = arr[i];
            cout << max_from_right << " ";
        }
    }   
}
 
//Driver Code
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Leaders in an array: ";        
    printLeaders(arr, n);
    return 0;
} 