// recursive approach to bottom view of tree
void bottom_view_helper(Node* root, map<int,pair<Node*,int>> &m,int depth,int vd)
{
    if(root == NULL)
        return;
    if(m.count(vd) == 0)
        m[vd]=make_pair(root,depth);
    else if(m[vd].second <= depth)
                m[vd]=make_pair(root,depth);
                
                bottom_view_helper(root -> left, m,depth + 1,vd - 1);
                bottom_view_helper(root -> right, m, depth + 1, vd + 1);
        
}
vector <int> bottomView(Node *root)
{
map<int,pair<Node*,int>> m;
bottom_view_helper(root,m,0,0); 
vector<int> v;
auto it = m.begin();
while(it != m.end())
{
    Node *temp=(it->second).first;
    v.push_back(temp -> data);
    it++;
}
return v;
}
