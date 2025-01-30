class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)           return false;

        int temp = x;
        long long ans = 0;
        while(temp > 0){
            int dig = temp % 10;
            temp /= 10;
            if(ans > INT_MAX/10)             return false;
            ans = ans * 10 + dig;
        }

        // if(ans > INT_MAX)               return false;

        return (int)ans == x;
    }
};