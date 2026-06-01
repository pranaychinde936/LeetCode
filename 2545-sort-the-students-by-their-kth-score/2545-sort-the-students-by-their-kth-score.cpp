class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int, int>> v;
        vector<vector<int>> ans;

        int m = score.size();
        for(int i=0; i<m; i++){
            v.push_back({score[i][k], i});
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());
        
        for(auto pr : v){
            ans.push_back(score[pr.second]);
        }

        return ans;
    }
};