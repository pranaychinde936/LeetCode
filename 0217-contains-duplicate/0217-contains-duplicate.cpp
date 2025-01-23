class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;

        for(auto ele : nums){
            hash[ele]++;
        }

        for(auto pr : hash){
            if(pr.second > 1)           return true;
        }
        
        return false;
    }
};