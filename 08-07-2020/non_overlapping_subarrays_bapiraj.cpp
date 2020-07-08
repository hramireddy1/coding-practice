class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int sum = 0, min_len = INT_MAX, result = INT_MAX;
        vector<int> v(n);
        unordered_map<int, int> m1, m2;
        
        m1[0] = -1, m2[0] = n;        
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            int diff = sum - target;
            
            if (m1.count(diff))
                min_len = min(min_len, i - m1[diff]);
            
            v[i] = min_len;         
            m1[sum] = i;
        }
        
        sum = 0, min_len = INT_MAX;
        
        for (int i = n-1; i > 0; i--) {
            sum += arr[i];
            int diff = sum - target;            
            
            if (m2.count(diff))
                min_len = min(min_len, m2[diff] - i);
                    
            m2[sum] = i;
            
            if (v[i-1] != INT_MAX and min_len != INT_MAX)
                result = min(result, v[i-1] + min_len);
        }
        
        return (result == INT_MAX)?-1:result;
        
    }
};