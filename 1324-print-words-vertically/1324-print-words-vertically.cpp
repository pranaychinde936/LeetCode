class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> ans;
        vector<string> words;
        int n = s.length();
        int maxLen = 0;

        string word = "";
        for(int i=0; i<n; i++){
            while(i<n && s[i] != ' '){
                word.push_back(s[i]);
                i++;
            }
            words.push_back(word);
            int l = word.length();
            maxLen = max(maxLen, l);
            word = "";
        }

        int m = words.size();
        for(int j=0; j<maxLen; j++){
            string ansWord = "";
            for(int i=0; i<m; i++){
                if(j < words[i].length()){
                    ansWord.push_back(words[i][j]);
                }
                else{
                    ansWord.push_back(' ');
                }
            }
            int k = ansWord.length()-1;
            while(k >= 0 && ansWord[k] == ' '){
                ansWord.pop_back();
                k--;
            }
            ans.push_back(ansWord);
        }

        return ans;
    }
};