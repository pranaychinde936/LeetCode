class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int num : nums){
            int digs = 0;
            while(num){
                digs++;
                num = num/10;
            }
            if(digs % 2 == 0)           ans++;
        }
        return ans;
    }
};