class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        int start = nums[0]%2;
        
        for(int i=1; i<n; i++){
            if(nums[i] % 2 == start)            return false;
            start = nums[i] % 2;
        }

        return true;
    }
};