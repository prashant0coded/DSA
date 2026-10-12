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
void reversePreorder(TreeNode*node,int level,vector<int>&ans){
    if(node==NULL) return;
    if(ans.size()==level) ans.push_back(node->val);
    reversePreorder(node->right,level+1,ans);
    reversePreorder(node->left,level+1,ans);
}
    vector<int> rightSideView(TreeNode* root) {
        TreeNode* node=root;
        vector<int>ans;
        reversePreorder(node,0,ans);
        return ans;
        
    }
};