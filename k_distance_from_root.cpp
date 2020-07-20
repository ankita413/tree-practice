int findheight(Node *root)
{
if(root == NULL)
return 0;
    int a = findheight(root -> left);
    int b = findheight(root -> right);
    if(a>b)
    return a+1;
    else
    return b+1;
}
void printKdistance(struct Node *root, int k)
{
    if(root == NULL)
    return;
    int height = findheight(root);
    if(k>height)
         return;
         int level = 0;
         int count = 1;
         queue<Node *> q;
         q.push(root);
         while(!q.empty())
         {
             if(level == k)
             {
                 while(!q.empty())
                 {
                     cout<<q.front()->data<<" ";
                     q.pop();
                 }
                 break;
             }
             int countnode = count;
             count = 0;
             while(countnode)
             {
                 Node *temp = q.front();
                 q.pop();
                 if(temp -> left)
                    {
                        q.push(temp->left);
                        count++;
                    }
                    if(temp -> right)
                    {
                        q.push(temp -> right);
                        count ++;
                        
                    }
                    countnode--;
             }
             level++;
         }
         
}
