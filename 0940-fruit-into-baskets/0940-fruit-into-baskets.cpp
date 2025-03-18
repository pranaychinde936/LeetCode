class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, r = 0, n = fruits.size();
        int ans = 0;
        unordered_map<int, int> hash;

        while(r<n){
            hash[fruits[r]]++;

            if(hash.size() > 2){
                hash[fruits[l]]--;
                if(hash[fruits[l]] == 0)        hash.erase(fruits[l]);
                l++;
            }

            ans = max(ans, r-l+1);
            r++;
        }

        return ans;
    }
};