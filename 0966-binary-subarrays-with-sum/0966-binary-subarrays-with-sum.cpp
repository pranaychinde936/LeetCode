class Solution {
private:
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
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // return 9;
        return subArrays(nums, goal) - subArrays(nums, goal-1);
    }
};