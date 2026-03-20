class Solution {
public:
    string stringHash(string s, int k) {
        string ans = "";
        int n = s.length();

        for(int i=0; i<n; i+=k){
            int j = i, sm = 0;
            while(j < (k + i)){
                sm = sm + (s[j] - 97);
                j++;
            }
            ans.push_back(char(sm%26 + 97));
        }

        return ans;
    }
};