class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int num : nums){
            hash[num]++;
        }

        int sum = 0;
        for(auto pr : hash){
            if(pr.second == 1){
                sum += pr.first;
            }
        }

        return sum;
    }
};