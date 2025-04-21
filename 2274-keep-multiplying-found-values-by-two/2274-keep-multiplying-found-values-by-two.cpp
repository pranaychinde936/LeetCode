class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> st;
        
        int n = nums.size();
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
 
        while(st.find(original) != st.end()){
            original = original * 2;
        }

        return original;                              
    } 
};