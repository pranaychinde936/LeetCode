class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val)          continue;

            hash[nums[i]]++;
        }

        int i=0;
        for(auto pr : hash){
            while(pr.second > 0){
                nums[i] = pr.first;
                pr.second = pr.second-1;
                i++;
                ans++;
            }
        }

        return ans;
    }
};