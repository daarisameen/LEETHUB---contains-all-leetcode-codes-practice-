class Solution {
public:
    int solve(int num,vector<int>&v)
    {
        if(num==0)
            return 0;
        if(v[num]!=-1)
            return v[num];
        if(num%2==0)
            return v[num]=1+solve(num/2,v);
        else
            return v[num]=1+solve(num-1,v);
    }
    int numberOfSteps(int num) {
        vector<int>v(num+1,-1);
        return solve(num,v);
    }
};