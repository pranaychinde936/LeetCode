class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans;

        map<int, int> hash;
        for(auto item : items1){
            hash[item[0]] = item[1];
        }

        for(auto item : items2){
            hash[item[0]] += item[1];
        }

        for(auto pr : hash){
            ans.push_back({pr.first, pr.second});
        }

        return ans;
    }
};