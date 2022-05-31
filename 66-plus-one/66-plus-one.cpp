class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(n==1)
        {
            if(digits[0]==9)
            {
                vector<int>v;
                v.push_back(1);
                v.push_back(0);
                return v;
            }
            else
            {
                digits[0]++;
                return digits;
            }
        }
        vector<int>v;
        int carry=1;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]+carry==10)
            {
                v.push_back(0);
                carry=1;
            }
            else
            {
                v.push_back(digits[i]+carry);
                carry=0;
            }
            
        }
        if(carry==1)
            v.push_back(1);
        reverse(v.begin(),v.end());
        return v;
    }
};