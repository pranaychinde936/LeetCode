class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hash;

        int n = s.length();
        for(int i=0; i<n; i++){
            hash[s[i]]++;
        }

        int ans = 0;
        bool isOdd = false;
        for(auto pr : hash){
            if(pr.second % 2 == 0)          ans += pr.second;
            else{
                isOdd = true;
                ans += pr.second-1;
            }
        }

        if(isOdd)                           ans+=1;
        return ans;
    }
};