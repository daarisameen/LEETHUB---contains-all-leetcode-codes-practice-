class Solution {
public:
    int solve(int num)
    {
        if(num==0)
            return 0;
        if(num%2==0)
            return 1+solve(num/2);
        else
            return 1+solve(num-1);
    }
    int numberOfSteps(int num) {
        vector<int>v(num+1,0);
        return solve(num);
    }
};