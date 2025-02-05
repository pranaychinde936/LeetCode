class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;

        while(i >= 0){
            if(s[i] == ' ')     i--;
            else                break;
        }

        int ans = 0;
        while(i >= 0){
            if(s[i] != ' ')             ans++;
            else                        return ans;
            i--;
        }

        return ans;
    }
};