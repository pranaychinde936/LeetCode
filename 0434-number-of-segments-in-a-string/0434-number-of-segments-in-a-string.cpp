class Solution {
public:
    int countSegments(string s) {
        int n = s.length();

        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                while(i < n && s[i] != ' ')         i++;
                ans++;
            }
        }

        return ans;
    }
};