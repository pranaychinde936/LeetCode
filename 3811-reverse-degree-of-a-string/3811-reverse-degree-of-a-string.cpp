class Solution {
public:
    int reverseDegree(string s) {
        vector<int> hash(26);
        int val = 26;
        for(int i=0; i<26; i++, val--){
            hash[i] = val;
        }

        int ans = 0, n = s.length();
        for(int i=0; i<n; i++){
            ans = ans + (i + 1) * hash[s[i]-'a'];
        }

        return ans;
    }
};