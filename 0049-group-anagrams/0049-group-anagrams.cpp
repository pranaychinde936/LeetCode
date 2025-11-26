class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ump;
        vector<vector<string>> ans;

        for(string str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());

            ump[temp].push_back(str);
        }

        for(auto pr : ump){
            ans.push_back(pr.second);
        }

        return ans;
    }
};