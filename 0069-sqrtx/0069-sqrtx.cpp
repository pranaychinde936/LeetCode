class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1)      return x;

        int s = 0, e = x;
        long long mid;

        int ans;

        while(s <= e){
            mid = s + (e-s)/2;
            if(mid * mid == x)          return mid;

            if(mid * mid > x){
                e = mid - 1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }
        }

        return ans;
    }
};