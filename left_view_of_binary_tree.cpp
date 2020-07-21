//recursive approach
void leftView_helper(Node *root, int level ,int *maxlevel)
{
    if(root == NULL)
        return;
        
        if(*maxlevel < level)
        {
            *maxlevel = level;
            cout<<root -> data<<" ";
        }
        leftView_helper(root -> left , level + 1, maxlevel);
        leftView_helper(root -> right , level + 1, maxlevel);
}
void leftView(Node *root)
{
  int maxlevel = 0;
  leftView_helper(root, 1, &maxlevel);
}

// iterative approach
void leftView(Node *root)
{
    if(root == NULL)
    return;
   int countnode = 0;
   queue<Node*>q;
   q.push(root);
   while(!q.empty())
   {
       countnode = q.size();
       cout<<q.front()->data<<" ";
       while(countnode)
       {
           Node *temp = q.front();
           q.pop();
           if(temp -> left)
            q.push(temp -> left);
            if(temp -> right)
                q.push(temp -> right);
                countnode--;
       }
   }
}
