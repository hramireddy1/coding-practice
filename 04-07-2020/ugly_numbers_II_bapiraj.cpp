class Solution {
public:
    int nthUglyNumber(int n) {
        int idx2 = 0, idx3 = 0, idx5 = 0;
        int ugly[n];
        ugly[0] = 1;
        for(int i = 1; i < n; i++)
        {
            ugly[i] = min(2*ugly[idx2], min(3*ugly[idx3], 5*ugly[idx5]));    
            if(ugly[i] == 2*ugly[idx2]) idx2++;
            if(ugly[i] == 3*ugly[idx3]) idx3++;
            if(ugly[i] == 5*ugly[idx5]) idx5++;
        }
        return ugly[n-1];
    }
};