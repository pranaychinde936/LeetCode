class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> hash;

        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
            if(hash[nums[i]] > 1)           ans.push_back(nums[i]);
        }

        return ans;
    }
};