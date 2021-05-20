/* C++ program to find the majority element 
A majority element in an array A[] of size n is an element that appears more than n/2 times 
Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater than the half of the size of the array size. */

#include <bits/stdc++.h>
using namespace std;

struct node {
	int key;
	int c =0;
	struct node *left, *right;
};

struct node* newNode(int item){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->c =1;
	temp->left = temp->right = NULL;

	return temp;
}

struct node* insert(struct node* node, int key, int& ma){
	if(node == NULL)
		if(ma == 0)
			ma = 1; 

	    return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key, ma);
    else if (key > node->key)
        node->right = insert(node->right, key, ma);
    else
        node->c++;
 
    ma = max(ma, node->c);
 
    return node;
}
 
void inorder(struct node* root, int s) {
    if (root != NULL) {
        inorder(root->left, s);
 
        if (root->c > (s / 2))
            printf("%d \n", root->key);
 
        inorder(root->right, s);
    }
}

// Driver Code
int main() {
    int a[] = { 1, 3, 3, 3, 2 };
    int size = (sizeof(a)) / sizeof(a[0]);
 
    struct node* root = NULL;
    int ma = 0;
 
    for (int i = 0; i < size; i++) {
        root = insert(root, a[i], ma);
    }
 
    if (ma > (size / 2))
        inorder(root, size);
    else
        cout << "No majority element\n";
    return 0;
}