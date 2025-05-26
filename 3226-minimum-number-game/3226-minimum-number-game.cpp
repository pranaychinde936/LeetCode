class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans = nums;

        sort(ans.begin(), ans.end());
        int n = ans.size();

        for(int i=0; i<n; i+=2){
            swap(ans[i], ans[i+1]);
        }

        return ans;
    }
};