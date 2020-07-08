class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        if(n == 0) return res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(i > 0  and nums[i] == nums[i-1]) continue;
            int l = i+1, r = n-1;
            while(l < r)
            {
                if(r < n-1 and nums[r] == nums[r+1]){ r--; continue;}
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});
                    r--;
                }
                else if(sum < 0) l++;
                else r--;
            }
        }
        
        return res;
        
        
    }
};