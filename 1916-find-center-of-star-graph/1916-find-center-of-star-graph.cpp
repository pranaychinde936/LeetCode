class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> hash;

        for(auto edge : edges){
            for(auto node : edge){
                hash[node]++;
            }
        }

        int cnt = edges.size();
        for(auto edge : edges){
            for(auto node : edge){
                if(hash[node] == cnt)           return node;
            }
        }


        return -1;
    }
};