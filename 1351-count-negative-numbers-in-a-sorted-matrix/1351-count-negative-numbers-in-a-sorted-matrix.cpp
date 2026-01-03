class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        int ans = 0, j = n-1;
        for(int i=0; i<m && j >= 0; i++){
            if(grid[i][j] < 0){
                while(j >= 0 && grid[i][j] < 0){
                    ans += (m-i);
                    j--;
                }
            }

        }

        return ans;
    }
};