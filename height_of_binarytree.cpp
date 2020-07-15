int height(Node* root)
{
  if(root == NULL)
    return 0;
    
    int a = height(root -> left);
    int b= height(root -> right);
    if(a>b)
        return a+1;
        else 
        return b+1;
}

