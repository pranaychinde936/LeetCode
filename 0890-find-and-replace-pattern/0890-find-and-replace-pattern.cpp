class Solution {
private:
    vector<int> convertToIntPattern(string &pattern){
        vector<int> ans;
        unordered_map<char, int> mp;
        int i = 1;

        for(char ch : pattern){
            if(mp[ch] == 0){
                mp[ch] = i;
                i++;
            }
        }

        for(char ch : pattern){
            ans.push_back(mp[ch]);
        }

        return ans;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        vector<int> intPattern = convertToIntPattern(pattern);
        
        for(string word : words){
            vector<int> temp = convertToIntPattern(word);
            int i = 0, n = temp.size();
            for(i = 0; i < n; i++){
                if(temp[i] != intPattern[i]){
                    break;
                }
            }
            if(i == n)          ans.push_back(word);
        }

        return ans;
    }
};