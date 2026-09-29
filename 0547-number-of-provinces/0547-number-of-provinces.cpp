class Solution {
private:
    void dfs(int node, vector<int> &vis, vector<vector<int>>& adj){
        vis[node] = 1;

        for(int i=0; i<adj[node].size(); i++){
            if(adj[node][i] && !vis[i]){
                dfs(i, vis, adj);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0, n = isConnected.size();
        vector<int> vis(n, 0);

        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(i, vis, isConnected);
                ans++;
            }
        }

        return ans;
    }
};