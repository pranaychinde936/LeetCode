class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};

        // ((rottonOrange[i], rottonOrange[j]), steps)
        queue<pair<pair<int, int>, int>> q;

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> visited(m, vector<int> (n, 0));

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                }
            }
        }

        int ans = 0;
        while(!q.empty()){
            auto ele = q.front();
            q.pop();

            int row = ele.first.first;
            int col = ele.first.second;
            int steps = ele.second;

            for(int i=0; i<4; i++){
                int nrow = row + delRow[i];
                int ncol = col + delCol[i];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !visited[nrow][ncol] && grid[nrow][ncol] == 1){
                    q.push({{nrow, ncol}, steps+1});
                    visited[nrow][ncol] = 1;
                    ans = max(steps+1, ans);
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1 && visited[i][j] == 0)           return -1;
            }
        }

        return ans;
    }
};