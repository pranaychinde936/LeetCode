class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        int startingColor = image[sr][sc];

        if(startingColor == color)          return ans;

        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};

        queue<pair<int, int>> q;

        int m = image.size();
        int n = image[0].size();


        q.push({sr, sc});
        ans[sr][sc] = color;

        while(!q.empty()){
            auto ele = q.front();
            q.pop();

            int row = ele.first;
            int col = ele.second;

            for(int i=0; i<4; i++){
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && ans[nrow][ncol] == startingColor){
                    q.push({nrow, ncol});
                    ans[nrow][ncol] = color;
                }
            }
        }

        return ans;
    }
};