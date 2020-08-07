class Solution {
public:
    void helper(TreeNode* root, int *sum)
    {
        if(root == NULL)
            return;
        
        helper(root -> right , sum);
        *sum = *sum + root -> val;
        root -> val = *sum;
        helper(root -> left , sum);
        
        
    }
    
    
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        helper(root, &sum);
        return root;
    }
};
