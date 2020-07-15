#include <bits/stdc++.h>
using namespace std;
struct  Node*
{
	int data;
	Node * left,*right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
void inorder(Node * root)
{
	stack<Node*> s;
	S.push(root);
	Node * curr=root->left;
	while(!s.empty() || curr!=NULL)
	{
			while(curr)
			{
				s.push(curr);
				curr=curr->left;
			}
			curr=s.top();
			cout<<curr->data<<" ";
			s.pop();

			curr=curr->right;
	}
}
int main()
{
	Node root= new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left= new Node(60);
	inorder(root);
}
