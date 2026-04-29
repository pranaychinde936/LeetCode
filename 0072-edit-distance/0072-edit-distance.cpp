class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size(), n = word2.size();
        vector<int> curr(n+1, 0), prev(n+1, 0);

        for(int j=0; j<=n; j++)                 prev[j] = j;
        prev[0] = 0;
        curr[0] = 1;

        for(int i=1; i<=m; i++){
            curr[0] = i;                    // very important base case handling
            for(int j=1; j<=n; j++){
                if(word1[i-1] == word2[j-1])            curr[j] = 0 + prev[j-1];
                else curr[j] = 1 + min(curr[j-1], min(prev[j], prev[j-1]));
            }
            prev = curr;
        }

        return prev[n];
    }
};