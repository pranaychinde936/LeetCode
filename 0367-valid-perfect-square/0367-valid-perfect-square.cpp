class Solution {
public:
    bool isPerfectSquare(int num) {
        int s = 1, e = num;
        int mid;
        long long sq;

        while(s<=e){
            mid = s + (e-s)/2;
            sq = 1LL * mid * 1LL * mid;

            if(sq == num)           return true;

            if(sq > num)            e = mid - 1;
            else                    s = mid + 1;
        }

        return false;
    }
};