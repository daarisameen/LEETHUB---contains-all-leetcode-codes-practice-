class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0,end=letters.size()-1;
        char z=letters[0];
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            if(letters[mid]>target)
            {
                z=letters[mid];
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return z;
    }
};