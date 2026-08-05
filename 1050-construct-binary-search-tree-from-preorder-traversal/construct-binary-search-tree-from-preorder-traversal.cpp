/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *dfs(vector<int> &pre,int lwr,int upr,int &idx){
        if(idx>=pre.size() || pre[idx]<lwr || pre[idx]>upr) return nullptr;
        TreeNode * root=new TreeNode(pre[idx]);
        idx++;
        root->left=dfs(pre,lwr,root->val,idx);
        root->right=dfs(pre,root->val,upr,idx);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx=0;
        return dfs(preorder,INT_MIN,INT_MAX,idx);
    }
};