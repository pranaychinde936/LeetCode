class Solution {
public:
    bool judgeCircle(string moves) {
        int l = 0, r = 0;

        for(auto move : moves){
            switch(move){
                case 'U':
                    l--;
                    break;
                case 'D':
                    l++;
                    break;
                case 'R':
                    r++;
                    break;
                case 'L':
                    r--;
                    break;
            }
        }

        return l == 0 && r == 0;
    }
};