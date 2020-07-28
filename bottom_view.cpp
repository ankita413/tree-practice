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
//iterative approach
vector <int> bottomView(Node *root)
{
     vector<int> v;
     v.push_back(0);
    if(root == NULL)
    return v;
    v.pop_back();
  queue<pair<Node*,int>>q;
  q.push(make_pair(root,0));
  int vd = 0;
  int count_size = 0;
  map<int,int> m;
  while(!q.empty())
  {
      count_size = q.size();
      while(count_size)
      {
          pair<Node*,int> temp = q.front();
          q.pop();
          vd = temp.second;
          Node *node =  temp.first;
          m[vd] = node -> data;
          if(node -> left)
          q.push(make_pair(node -> left , vd - 1));
          if(node -> right)
          q.push(make_pair(node -> right , vd + 1));
          count_size--;
      }
  }
 
  auto it = m.begin();
  while(it != m.end())
  {
      v.push_back(it -> second);
      it++;
  }
  return v;
}

