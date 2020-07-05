class Solution {
public:
    int nthUglyNumber(int n) {
        
        int list[n];
        list[0] = 1;
        int index2 = 0, index3 = 0, index5 = 0;

        
        for(int i=1; i<n; i++)
        {
            list[i] = min(list[index2]*2 , min(list[index3]*3, list[index5]*5));
            if(list[i] == list[index2]*2) index2++;
            if(list[i] == list[index3]*3) index3++;
            if(list[i] == list[index5]*5) index5++;
            
        }

        return list[n-1];
    }
};