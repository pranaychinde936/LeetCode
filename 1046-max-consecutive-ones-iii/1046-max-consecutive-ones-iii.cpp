class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxOnes = 0;

        int l = 0, r = 0, n = nums.size();
        int zeros = 0;

        while(r<n){
            if(nums[r] == 0){
                zeros++;
            }

            if(zeros > k){
                if(nums[l] == 0)            zeros--;
                l++;
            }

            maxOnes = max(maxOnes, r-l+1);
            r++;
        }

        return maxOnes;
    }
};