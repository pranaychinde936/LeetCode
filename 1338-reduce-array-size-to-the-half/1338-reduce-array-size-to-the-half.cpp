class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int ans = 0;
        unordered_map<int, int> mp;

        for(int val : arr){
            mp[val]++;
        }

        vector<int> temp;
        for(auto pr : mp){
            temp.push_back(pr.second);
        }

        sort(temp.begin(), temp.end());
        int n = temp.size();
        int reqSz = arr.size()/2;

        int cnt = 0;
        for(int i=n-1; i>=0; i--){
            cnt = cnt + temp[i];
            ans++;
            if(cnt >= reqSz){
                return ans;
            }
        }

        return ans;
    }
};