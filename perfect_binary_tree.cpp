bool isPerfectRec(struct Node* root, int d, int level )
{
if(root == NULL)
return false;
int currlevel = 0;
int count = 1;
queue<Node*> q;
q.push(root);
while(!q.empty())
{
    int countnode = count;
    count = 0;
    while(countnode)
    {

        Node *temp = q.front();
        q.pop();
        if(temp -> left)
        {
            q.push(temp -> left);
            count++;
        }
        if(temp -> right)
        {
            q.push(temp -> right);
            count++;
        }
        countnode--;
    }
    if(q.size()!= 0)
    {
    currlevel++;
    if(count != pow(2,currlevel))
     return false;
}
}
return true;
}
