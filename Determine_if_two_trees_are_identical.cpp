bool isIdentical(Node *r1, Node *r2)
{
    if(r1 == NULL && r2 == NULL)  // if both trees are empty then return true bcoz if both trees are NULL then they are identical;
        return true;
     else if((r1 == NULL && r2!=NULL) || (r2 == NULL && r1!=NULL))
        return false;
        if(r1 -> data != r2 -> data)
                return false;
        
        bool r1ans = isIdentical(r1 -> left, r2 -> left);
        bool r2ans = isIdentical(r1 -> right, r2 -> right);
        return r1ans && r2ans;
}
