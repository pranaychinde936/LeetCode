class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int odds = 0, evens = 0, n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] % 2)         odds++;
            else                    evens++;
        }

        vector<int> ans;
        while(evens){
            ans.push_back(0);
            evens--;
        }

        while(odds){
            ans.push_back(1);
            odds--;
        }

        return ans;
    }
};