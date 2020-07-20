int maxLevelSum(Node* root) {
if(root == NULL)
    return -1;
    
    int level = 0;
    int count  = 1;
    int countnode = 0;
    queue<Node*> q;
    q.push(root);
    int sum = 0;
    int maxsum = INT_MIN;
    while(!q.empty())
    {
        countnode = count;
        count = 0;
        while(countnode)
        {
            Node *temp = q.front();
            q.pop();
            sum += temp->data;
            if(temp -> left)
                {
                    count++;
                    q.push(temp -> left);
                }
            if(temp -> right)
            {
                count++;
                q.push(temp->right);
            }
            countnode--;
        }
        
        if(maxsum < (sum))
        {
            maxsum = sum;
        }
        sum = 0;
    }
return maxsum;
}
