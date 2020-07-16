// iterative approach. solved using Level order Traversal. Time Complexity O(n)  where n are number of nodes in tree. Space Complexity:- O(n) where n are number of nodes in tree
long int sumBT(Node* root)
{
if(root == NULL)
return 0;
long int sum=0;
queue<Node*> q;
q.push(root);
while(!q.empty())
{
    Node* temp = q.front();
    sum=sum+temp->key;
    q.pop();
    if(temp->left)
        q.push(temp->left);
    if(temp->right)
        q.push(temp->right);
}
return sum;    
}
