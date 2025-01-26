class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, vector<int>> hash;
        for(int i=0; i<n; i++){
            hash[nums[i]].push_back(i);
        }

        for(auto pr : hash){
            for(int i=0; i<pr.second.size() - 1; i++){
                if(pr.second[i+1] - pr.second[i] <= k){
                    return true;
                }
            }
        }

        return false;
    }
};