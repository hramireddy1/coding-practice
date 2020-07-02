class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(not root) return result;
        vector<int> l;
        queue<TreeNode*> q1, q2;
        q1.push(root);
        while(not q1.empty() or not q2.empty())
        {
            while(not q1.empty())
            {
                TreeNode* node = q1.front();
                q1.pop();
                if(node->left) q2.push(node->left);
                if(node->right) q2.push(node->right);
                l.push_back(node->val);
            }
            if(not l.empty()) result.push_back(l);
            l.clear();
            
            while(not q2.empty())
            {
                TreeNode* node = q2.front();
                q2.pop();
                if(node->left) q1.push(node->left);
                if(node->right) q1.push(node->right);
                l.push_back(node->val);
            }
            if(not l.empty()) result.push_back(l);
            l.clear();
        }
        
        reverse(result.begin(), result.end());
        
        return result;
        
        
    }
};
