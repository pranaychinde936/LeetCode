class Solution {
private:
    bool camelMatchOne(string& query, string& pattern, int& n){
        int i = 0, j = 0;
        int m = query.length();

        while(i < m && j < n){
            if(query[i] == pattern[j]){
                i++;
                j++;
            }
            else{
                if(query[i] >= 65 && query[i] <= 90)            return false;
                i++;
            }
        }

        while(i<m){
            if(query[i] >= 65 && query[i] <= 90)                return false;
            i++;
        }

        return (j == n);
    }
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        int n = pattern.length();

        for(string query : queries){
            ans.push_back(camelMatchOne(query, pattern, n));
        }

        return ans;
    }
};