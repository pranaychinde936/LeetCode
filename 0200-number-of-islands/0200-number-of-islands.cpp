class Solution {
private:
    bool isValid(int& i, int& j, int& m, int& n, vector<vector<char>>& grid){
        return (i < m && i >= 0 && j < n && j >= 0 && grid[i][j] == '1');
    }

    void dfs(int row, int col, vector<vector<int>>& vis, vector<int>& delRow, vector<int>& delCol, int& m, int& n, vector<vector<char>>& grid){
        vis[row][col] = 1;

        for(int i=0; i<4; i++){
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];

            if(isValid(nRow, nCol, m, n, grid) && !vis[nRow][nCol]){
                dfs(nRow, nCol, vis, delRow, delCol, m, n, grid);
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;

        vector<vector<int>> vis(m, vector<int> (n, 0));

        vector<int> delRow = {-1, 0, 1, 0}, delCol = {0, 1, 0, -1};

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    ans++;
                    dfs(i, j, vis, delRow, delCol, m, n, grid);
                }
            }
        }

        for(int i = 0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<< vis[i][j]<< " ";
            }
            cout<< endl;
        }

        return ans;
    }
};