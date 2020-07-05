class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return 0;
        else if(nums.size()==1) return new TreeNode (nums[0]);
        
        int middle=nums.size()/2;
        TreeNode *root=new TreeNode(nums[middle]);
        vector<int> left(nums.begin(),nums.begin()+middle);
        vector<int> right(nums.begin()+middle+1 , nums.end());
        
        //cout<<left<<" ";

        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);
        
        return root;
    }
};