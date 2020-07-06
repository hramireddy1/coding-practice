class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int n = digits.size()-1;
        while(n >= 0)
        {
            int s = digits[n] + carry;
            if(s < 10) carry = 0;
            digits[n] = s%10;
            n--;
        }
        if(carry) digits.insert(digits.begin(), carry);
        return digits;
    }
};