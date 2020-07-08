class Solution {
public:
    int islandPerimeter(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int s = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j])
                {
                    if(i == 0 or not a[i-1][j]) s++;

                    if(i == m-1 or not a[i+1][j]) s++;
                    
                    if(j == 0 or not a[i][j-1]) s++;

                    if(j == n-1 or not a[i][j+1]) s++;
                }
            }
        }
        return s;
    }
};
