/* C++ program to find the median of running integers using STL
Input: 5 10 15 
Output: 5, 7.5, 10 
Explanation: Given the input stream as an array of integers [5,10,15]. Read integers one by one and print the median correspondingly. 
So, after reading first element 5,median is 5. After reading 10,median is 7.5 After reading 15 ,median is 10. */
#include<bits/stdc++.h>
using namespace std;
  
// function to calculate med of stream
void printMedians(double arr[], int n) {
    // max heap to store the smaller half elements
    priority_queue<double> s;
  
    // min heap to store the greater half elements
    priority_queue<double,vector<double>,greater<double> > g;
  
    double med = arr[0];
    s.push(arr[0]);
  
    cout << med << endl;

    for (int i=1; i < n; i++) {
        double x = arr[i];
  
        // case1 (left side heap has more elements)

        if (s.size() > g.size()) {
            if (x < med) {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else
                g.push(x);
  
            med = (s.top() + g.top())/2.0;
        }
  
        // case2(both heaps are balanced)

        else if (s.size()==g.size()){
            if (x < med){
                s.push(x);
                med = (double)s.top();
            }

            else {
                g.push(x);
                med = (double)g.top();
            }
        }
  
        // case3(right side heap has more elements)
        else {
            if (x > med) {
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else
                s.push(x);
  
            med = (s.top() + g.top())/2.0;
        }
  
        cout << med << endl;
    }
}
  
// Driver program to test above functions
int main() {
    // stream of integers
    double arr[] = {5, 15, 10, 20, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMedians(arr, n);
    return 0;
}