class Solution {
public:
    string removeTrailingZeros(string num) {
        string ans = "";

        int n = num.size()-1;
        while(n){
            if(num[n] != '0')          break;
            n--;
        }

        for(int i=n; i>=0; i--)         ans.push_back(num[i]);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};