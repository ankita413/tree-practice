//recursive code
int countLeaves(Node* root) // using the concept of level order traversal
{
if(root == NULL)
 return 0;
int count = 0;
if(root -> left == NULL && root -> right == NULL)\
    count++;
int a = countLeaves(root -> left);
int b = countLeaves(root -> right);
return a+b+count;
}
// iterative code for the same
int countLeaves(Node* root)
{
if(root == NULL)
 return 0;
 queue<Node *>q;
 q.push(root);
 int count_leaves = 0;
 while(!q.empty())
 {
     Node *curr = q.front();
     q.pop();
     if(curr->left == NULL && curr -> right == NULL)
        count_leaves++;
    
    if(curr -> left != NULL)
        q.push(curr -> left);
    if(curr -> right !=NULL)
        q.push(curr -> right);
 }
 return count_leaves;
}
