class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        
        for(auto num : nums){
            while(num){
                int dig = num % 10;
                if(dig == digit)                ans++;
                num = num / 10;
            }
        }

        return ans;
    }
};