class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> hash;

        for(int i=0; i<names.size(); i++){
            hash[heights[i]] = names[i];
        }

        vector<string> ans;

        for(auto pr : hash){
            ans.push_back(pr.second);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};