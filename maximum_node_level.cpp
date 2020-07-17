int maxNodeLevel(Node *root)
{
if(root == NULL)
    return -1;
    
    queue<Node*> q;
    q.push(root);
    int maxcount = 1;
    int count = 1;
    int maxlevel = 0;
    int newlevel = 0;
    int countnode;
    while(!q.empty())
    {
        countnode = count;
        count =0;
        while(countnode)
        {
            Node* temp = q.front();
            q.pop();
            if(temp -> left)
            {
                q.push(temp -> left);
                count++ ;
            }
            if(temp -> right)
            {
                    q.push(temp -> right);
                    count++ ;
            }
            countnode-- ;
        }
        newlevel++;
        if(maxcount < count)
        {
            maxcount = count ;
            maxlevel = newlevel;
        }
    }
    return maxlevel;
}
