class Solution {
private:
    vector<int> get_arr(vector<int>& nums, int left, int right){
        vector<int> ret;
        for(int i=left; i <= right; i++){
            ret.push_back(nums[i]);
            cout<< nums[i]<< "  ";
        }
        cout<< endl;

        return ret;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;

        int n = nums.size(), m = l.size();

        for(int i=0; i<m; i++){
            vector<int> temp = get_arr(nums, l[i], r[i]);
            sort(temp.begin(), temp.end());
            int sz = temp.size();

            int diff = temp[1] - temp[0];
            int j;
            for(j=1; j<sz; j++){
                if(diff != (temp[j] - temp[j-1])){
                    ans.push_back(false);
                    break;
                }
            }

            if(j == sz){
                ans.push_back(true);
            }
        }

        return ans;
    }
};