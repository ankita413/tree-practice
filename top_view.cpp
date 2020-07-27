void topView(struct Node *root)
{
    if(root == NULL)
        return;
queue<pair<Node*,int>> q;
int hd = 0;
q.push(make_pair(root,hd));
map<int,int> m;
int count_size = 0;
while(!q.empty())
{
    count_size = q.size();
    while(count_size)
    {
        pair<Node*,int> temp = q.front();
        Node *node = temp.first;
        hd = temp.second;
        q.pop();
        if(m.count(hd) == 0)
        m[hd]=node -> data;
        if(node -> left)
        {
            q.push(make_pair(node -> left, hd - 1));
        }
        if(node -> right)
        {
            q.push(make_pair(node -> right, hd + 1));
        }
       count_size--; 
    }
}
auto it = m.begin();
while(it != m.end())
{
    cout<<it->second<<" ";
    it++;
}

}
