class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> hash;

        int n = s.length();
        for(int i=0; i<n; i++){
            hash[s[i]]++;
        }

        int cnt = hash[s[0]];

        for(auto pr : hash){
            if(pr.second != cnt)            return false;
        }

        return true;
    }
};