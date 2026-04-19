class Solution {
public:
    int maxDistinct(string s) {
        int ans = 0;
        unordered_map<char, int> hash;

        for(char ch : s){
            if(hash[ch] == 0){
                hash[ch] = 1;
                ans++;
            }
        }
        return ans;
    }
};