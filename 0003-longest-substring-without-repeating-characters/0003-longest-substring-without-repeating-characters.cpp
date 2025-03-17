class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> hash(256, -1);

        int l=0, r=0, n=s.length();
        int ans = 0;
        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l)     l = hash[s[r]] + 1;
            }

            int maxLen = r-l+1;
            ans = max(ans, maxLen);
            hash[s[r]] = r;
            r++;
        }

        return ans;



        // while(r<n){
        //     if(hash[s[r]] == -1){
        //         hash[s[r]] = r;
        //         ans = max(ans, r-l+1);
        //     }
        //     else{
        //         l = hash[s[r]] + 1;
        //         hash[s[r]] = -1;
        //     }
        //     r++;
        // }

    }
};