#include <iostream>
#include<queue>
using namespace std;
// first define the tree node either using struct or class
class Node*
{
	int data;
	Node *left,*right;
	Node(int data)
	{
		this -> data = data;
		left = right =NULL; //initially each node will have its left and right child as NULL;
	}
	void insert_node(Node *root,int data); //insert nodes into tree;
	{
		queue<Node*>q;
		q.push(root);
		Node *curr;
		while(!q.empty())
		{
			curr = q.front();
				q.pop();
				if(curr -> left != NULL) // if there is a left child of curr node
				{
					q.push(curr -> left);
				}
				else    // if left child of curr node is NULL, then create new node with the desired data and insert it into tree;
				{
					Node *newnode = new Node(data);
					curr -> left = newnode;
					break;
				}
				if(curr -> right != NULL)
					q.push(curr -> right);
				else
				{
					Node *newnode = new Node(data);
					curr -> right = newnode;
					break;
				}
		}
	}
};
bool symmetric_tree_helper(Node* root1, Node* root2) // two trees , root1= left tree and root2=right tree
{
	if(!root1 && ! root2)       // base case: if both trees are empty means it is symmetric
		return true;
	else if(!root1 && root2) // if one tree has a root node while other doesnt means it's not symmetric
		return false;
	else if(!root2 && root1) //same as above
		return false;
	if(root1 -> data == root2 -> data) // we will compare the subtrees only if both the root->data are same and if not same return false;
	{
		bool ans1 = symmetric_tree(root1 -> left,root2 -> right);
		bool ans2 = symmetric_tree(root1 -> right,root2 -> left);
		return ans1 && ans2;
	}
	return false;
}
bool is_Tree_Symmetric(Node *root) // function to check whether tree is symmetric or not
{
	return symmetric_tree_helper(root,root); //used helper function so that tree can be broken into two halves i.e. left and right tree
}
int main()
{
	int no_of_nodes;
	cin>>no_of_nodes;
	int root_data;
	cin>>root_data;
	Node * root = new Node(root_data);
	while(no_of_nodes)
	{
		int data;
		cin>>data;
		insert_node(root,data);
		no_of_nodes--;
	}
	cout<<is_Tree_Symmetric(root);
	return 0;
}
// iterative approach
/*
bool isSymmetric(struct Node* root)
{
    if(root == NULL)
    return true;
	Node *root1 = root;
	Node *root2 = root;
	queue<Node*> q;

	q.push(root1);
	q.push(root2);
	while(!q.empty())
	{
	    Node *temp1=q.front();
	    q.pop();
	    Node *temp2=q.front();
	    q.pop();
	 if(temp1->left ==NULL && temp2->right!=NULL)
	    return false;
	    else if(temp1 -> right ==NULL && temp2 -> left != NULL)
	        return false;
	 
	    if(temp1->data!=temp2->data)
	        return false;
	       
	        if(temp1->left!=NULL && temp2->right!=NULL)
	            {
	                q.push(temp1->left);
	                q.push(temp2->right);
	            }
	          
	            if(temp1->right!=NULL && temp2->left!=NULL)
	            {
	                q.push(temp1 -> right);
	                q.push(temp2 -> left);
	            }
	          
	}
	return true;
}
