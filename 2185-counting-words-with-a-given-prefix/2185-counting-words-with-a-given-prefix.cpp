class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int n = words.size();

        for(int i=0; i<n; i++){
            string word = words[i];
            if(pref.length() > word.length())           continue;

            int j = 0, m = pref.length();

            while(j < m){
                if(word[j] != pref[j])                  break;
                j++;
            }
            
            if(j == m)          ans++;
        }

        return ans;
    }
};