class Solution {
private:
    void solve(vector<int>& nums, vector<int> ds, set<vector<int>> &st, int idx, int n){
        //base case
        if(idx == n){
            sort(ds.begin(), ds.end());
            st.insert(ds);
            return;
        }

        solve(nums, ds, st, idx+1, n);              //Not pick
        ds.push_back(nums[idx]);
        solve(nums, ds, st, idx+1, n);              //Pick
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> ds;

        solve(nums, ds, st, 0, nums.size());
        
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};