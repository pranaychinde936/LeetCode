class Solution {
public:
    string triangleType(vector<int>& nums) {
        vector<string> ans = {"equilateral", "isosceles", "scalene"};

        if((nums[0] + nums[1] <= nums[2]) || (nums[1] + nums[2] <= nums[0]) || 
        (nums[0] + nums[2] <= nums[1])){
            return "none";
        }

        unordered_set<int> hash;

        hash.insert(nums[0]);
        hash.insert(nums[1]);
        hash.insert(nums[2]);

        return ans[hash.size()-1];
    }
};