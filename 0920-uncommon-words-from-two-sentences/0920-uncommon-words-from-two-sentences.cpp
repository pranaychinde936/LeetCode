class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> hash;
        string temp = "";
        
        for(auto ch : s1){
            if(ch != ' ')           temp.push_back(ch);
            else{
                hash[temp]++;
                temp = "";
            }
        }

        hash[temp]++;
        temp = "";

        for(auto ch : s2){
            if(ch != ' ')           temp.push_back(ch);
            else{
                hash[temp]++;
                temp = "";
            }
        }

        hash[temp]++;

        vector<string> ans;
        for(auto pr : hash){
            if(pr.second == 1)              ans.push_back(pr.first);
        }
        return ans;
    }
};