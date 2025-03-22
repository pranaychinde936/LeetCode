class Solution {
private:
    void dfs(int node, vector<int> adj[], vector<int> &visited){
        visited[node] = 1;

        for(auto adjNode : adj[node]){
            if(visited[adjNode] == 0){
                dfs(adjNode, adj, visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> visited(n, 0);
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(visited[i] == 0){
                dfs(i, adj, visited);
                cnt++;
            }
        }

        return cnt;
    }
};