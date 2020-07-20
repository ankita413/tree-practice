int sum(Node *root)
{
    if(root == NULL)
        return 0;
int a = sum(root -> left);
int b = sum(root -> right);
return root -> val + a + b;
}
int tiltTree(Node* root)
{
    if(root == NULL)
        return 0;
        int sumleft = sum(root -> left);
        int sumright = sum(root -> right);
        int tilt = abs(sumleft - sumright);
        int tiltleft = tiltTree(root -> left);
        int tiltright = tiltTree(root -> right);
        return tilt + tiltleft + tiltright;
}
