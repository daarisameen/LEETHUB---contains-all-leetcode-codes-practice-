class Solution {
public:
    void solve(vector<vector<int>>& image, int i, int j, int newcolor,int oldcolor)
    {
        if(i>=image.size() || j>=image[0].size() || i<0 || j<0)
            return;
        if(image[i][j]!=oldcolor)
            return;
        image[i][j]=newcolor;
        solve(image,i+1,j,newcolor,oldcolor);
        solve(image,i-1,j,newcolor,oldcolor);
        solve(image,i,j+1,newcolor,oldcolor);
        solve(image,i,j-1,newcolor,oldcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldcolor=image[sr][sc];
        if(oldcolor==newColor)
            return image;
        solve(image,sr,sc,newColor,oldcolor);
        return image;
    }
};