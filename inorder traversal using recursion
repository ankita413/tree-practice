#include<iostream>
using namespace std;
struct Node*{
int data;
Node *left,*right;
Node(int data)
{
this->data=data;
left=right=NULL;
}
};

void Inorder_Using_Recursion(Node *root){
if(root==NULL)
return NULL;

Inorder_Using_Recursion(root->left);
cout<<root->data;
Inorder_Using_Recursion(root->right);
}
int main()
{
	Node root= new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left= new Node(60);
	Inorder_Using_Recursion(root);
}
