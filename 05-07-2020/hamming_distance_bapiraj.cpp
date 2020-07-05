class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x ^ y;
        int dist = 0;
        while(a)
        {
            dist += (a & 1);
            a = a >> 1;
        }
        
        return dist;
        
    }
};