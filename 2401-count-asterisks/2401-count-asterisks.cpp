class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        bool vbar = false;

        for(auto ch : s){
            if(ch == '|'){
                vbar = !vbar;
            }

            if(!vbar && ch == '*'){
                ans++;
            }
        }

        return ans;
    }
};