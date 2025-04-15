class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int mini = INT_MAX;

        for(int i=0; i<n; i++){
            int sz = strs[i].length();
            mini = min(mini, sz);
            if(sz == 0)               return "";
        }

        string ans = "";
        int j = 0, i;
        while(j<mini){
            char ch = strs[0][j];
            for(i=0; i<n; i++){
                if(strs[i][j] != ch)        break;
            }

            if(i != n)              return ans;      

            ans.push_back(ch);
            j++;
        }

        return ans;
    }
};