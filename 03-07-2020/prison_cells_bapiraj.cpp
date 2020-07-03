class Solution {
public:
    
    vector<int> updatevector(vector<int> a)
    {
        vector<int> res(8, -1);
        res[0] = 0;
        res[7] = 0;
        for(int i = 1; i < 7; i++)
            if(a[i-1] == a[i+1])
                res[i] = 1;
            else
                res[i] = 0;
        return res;
    }
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        if(n == 0)
            return cells;
        if(cells[0] == 1 or cells[7] == 1)
        {
            cells = updatevector(cells);
            n--;
        }
        n = n%14;
        for(int i = 0; i < n; i++)
            cells = updatevector(cells);
        return cells;
        
    }
};
