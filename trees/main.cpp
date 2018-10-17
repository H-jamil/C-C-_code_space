//Complete Binaray tree: All levels except possibly yhe last are completely filled and all nodes
//are as left as possible
//At any level i we could have 2^i nodes in Binrary Tree

            /*        1
                    /   \
                   2     3
                  / \   / \
                 4  5  6  7

            */

// Balanced binary tree: Difference between the height of left anf right subtree for every node is not more
// than K (mostly1 1)      diff =[h left - h right]

// A EMPTY BINARY TREE HAS A HEIGHT OF -1 ()

// a one node binrary tree will have height of 1
// Obtaining a balanced binrary search tree is required to minimize the cost of different operations
// reference is another name of pointer



// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it

#include<iostream>
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode(); // new node is created using structure of BstNode & the address of
	                                  //of newly created node will be stored in newnode
                                     // (so new node will have three elements data, left pointer
                                    //  and right pointer as defined in struct BstNode)
    cout << newNode<<endl;

	newNode->data = data; //*newNode.data=data; dereferencing this pointer
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree.
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree.
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	BstNode* root ;// pointer to root node ; comes from struct BstNode
	root= NULL;  // Creating an empty tree  //root is the pointer of the tree i.e. address
                           // of the root node of the tree
	/*Code to test the logic*/
	root = Insert(root,15);
	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// Ask user to enter a number.
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
}
