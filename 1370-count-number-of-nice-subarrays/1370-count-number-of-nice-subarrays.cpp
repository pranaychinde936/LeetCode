class Solution {
    int subArrays(vector<int> &nums, int goal){
        if(goal < 0)        return 0;
        
        int l=0, r=0, n=nums.size();
        int sum = 0, cnt = 0;

        while(r<n){
            sum += nums[r];

            while(sum > goal){
                sum -= nums[l];
                l++;
            }

            cnt += (r-l+1);
            r++;
        }

        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return subArrays(nums, goal) - subArrays(nums, goal-1);
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<n; i++)              nums[i] = nums[i] % 2;
        return numSubarraysWithSum(nums, k);
    }
};