class Solution {
public:
    long long removeZeros(long long n) {
        string s = to_string(n);
        string ans = "";

        for(auto c : s){
            if(c != '0')    ans.push_back(c);
        }

        return stoll(ans);
    }
};