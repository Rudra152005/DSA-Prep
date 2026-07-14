
class Solution {
public:
    unordered_map<TreeNode *,TreeNode*> parent;
    void mapParent(TreeNode * root){
        if(!root) return;

        if(root->left) parent[root->left]=root;
        mapParent(root->left);
        if(root->right) parent[root->right]=root;
        mapParent(root->right);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        mapParent(root);

        queue<TreeNode*> q;
        unordered_set<TreeNode*> vis;

        q.push(target);
        vis.insert(target);

        int idx=0;

        while(!q.empty()){
            int size=q.size();
            if(idx==k) break;
            while(size--){
                TreeNode *curr=q.front();
                q.pop();

                if(parent.find(curr)!=parent.end() && vis.find(parent[curr])==vis.end()){
                    q.push(parent[curr]);
                    vis.insert(parent[curr]);
                }
                if(curr->left && vis.find(curr->left)==vis.end()){
                    q.push(curr->left);
                    vis.insert(curr->left);
                }
                if(curr->right && vis.find(curr->right)==vis.end()){
                    q.push(curr->right);
                    vis.insert(curr->right);
                }
            }
            
            
            idx++;
        }
        vector<int> ans;

        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};