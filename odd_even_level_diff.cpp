int getLevelDiff(Node *root)
{
   if(root == NULL)
    return -1;
   
   int level =0;
   int count  = 1;
   int countnode;
   queue<Node*> q;
   q.push(root);
          int data=0;
          int sum = 0;
   while(!q.empty())
   {
       countnode = count;
       count =0;
        while(countnode)
       {
           Node *temp = q.front();
           q.pop();
           data = temp -> data + data;
           if(temp -> left)
           {q.push(temp -> left);
            count++;
           }
           if(temp -> right)
           {
               q.push(temp -> right);
               count++;
           }
           countnode--;
       }
       level++;
       if(level % 2 == 0)
       {
           sum -= data;
       }
       else
       {
           sum = sum + data;
       }
       data =0;
   }
   return sum;
}
