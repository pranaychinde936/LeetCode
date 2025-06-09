class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash;

        for(auto ele : arr){
            hash[ele]++;
        }

        unordered_set<int> st;
        for(auto pr : hash){
            if(st.find(pr.second) != st.end()){
                return false;
            }
            st.insert(pr.second);
        }

        return true;
    }
};