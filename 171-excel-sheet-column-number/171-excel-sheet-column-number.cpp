class Solution {
public:
    int titleToNumber(string columnTitle) {
        map<char,int>mp;
        mp['A']=1,mp['B']=2,mp['C']=3,mp['D']=4,mp['E']=5,mp['F']=6,mp['G']=7,mp['H']=8,mp['I']=9,mp['J']=10,mp['K']=11,mp['L']=12,mp['M']=13,mp['N']=14,mp['O']=15,mp['P']=16,mp['Q']=17,mp['R']=18,mp['S']=19,mp['T']=20,mp['U']=21,mp['V']=22,mp['W']=23,mp['X']=24,mp['Y']=25,mp['Z']=26;
        long long int sum=0,prod=1;
        for(int i=columnTitle.length()-1;i>=0;i--)
        {
            // prod=1;
            sum+=(prod*mp[columnTitle[i]]);
            prod*=26;
        }
        return sum;
    }
};