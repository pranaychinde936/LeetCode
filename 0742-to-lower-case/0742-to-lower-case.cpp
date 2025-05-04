class Solution {
public:
    string toLowerCase(string s) {
        string ans = s;
        int n = s.length();

        for(int i=0; i<n; i++){
            if(ans[i] >= 65 && ans[i] <= 90){
                ans[i] = ans[i] + 32;
            }
        }

        return ans;
    }
};