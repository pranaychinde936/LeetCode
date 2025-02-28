class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;

        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        map<int, int> hash;

        int rank = 1;
        for(int i=0; i<temp.size(); i++){
            if(hash.find(temp[i]) == hash.end()){
                hash[temp[i]] = rank;
                rank++;
            }
        }

        for(int i=0; i<arr.size(); i++){
            ans.push_back(hash[arr[i]]);
        }

        return ans;
    }
};