class Solution {
public:
    int arrangeCoins(int n) {
        long current_level_sum = 0;
        long current_level = 0;
        
        while(current_level_sum<n)
        {
            current_level += 1;
            current_level_sum  = (current_level*(current_level+1))/2;
            if(current_level_sum>n)
                return current_level -1;  
        }
        return int(current_level);
    }
};