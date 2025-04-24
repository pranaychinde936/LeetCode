class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] != 0)            temp.push_back(nums[i]);
        }

        int remaining = n - temp.size();
        while(remaining){
            temp.push_back(0);
            remaining--;
        }

        nums = temp;
    }
};