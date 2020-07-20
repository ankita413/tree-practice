void mirror(Node* node) 
{
if(node == NULL)
    return ;
    
    Node *temp = node->left;    //swap the nodes
    node->left  = node -> right;
    node -> right = temp;
    mirror(node -> left);
    mirror(node -> right);
}
