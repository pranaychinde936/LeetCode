class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;

        for(auto sen : sentences){
            int cnt = 1;
            for(auto ch : sen){
                if(ch == ' ')               cnt++;
            }
            ans = max(ans, cnt);
        }

        return ans;
    }
};