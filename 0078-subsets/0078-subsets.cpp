class Solution {
private:
    void solve(vector<int>& nums, vector<int> ds, vector<vector<int>> &ans, int i, int n){
        //base case
        if(i == n){
            ans.push_back(ds);
            return;
        }

        solve(nums, ds,ans, i+1, n);            //Not pick
        ds.push_back(nums[i]);
        solve(nums, ds, ans, i+1, n);           //Pick
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;

        solve(nums, ds, ans, 0, nums.size());
        return ans;
    }
};