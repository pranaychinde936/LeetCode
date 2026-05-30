class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int as = 0, bs = 0;

        for(char ch : s){
            if(ch == 'a')           as++;
            else                    bs++;
        }

        return abs(as-bs);
    }
};