//Recursive approach T.C =O(n) as we are visiting each and every node
int countNonLeafNodes(Node* root)
{
if(root == NULL)
return 0;
    
    if(root -> left == NULL && root -> right == NULL)
     return 0;
        
        int a = countNonLeafNodes(root -> left);
        int b = countNonLeafNodes(root -> right);
            return a+b+1;
}
