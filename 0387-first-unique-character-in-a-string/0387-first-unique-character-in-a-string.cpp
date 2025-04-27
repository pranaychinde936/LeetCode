class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> hash;
        int n = s.length();
        for(int i=0; i<n; i++){
            hash[s[i]]++;
        }

        for(int i=0; i<n; i++){
            if(hash[s[i]] == 1)             return i;
        }
        
        return -1;
    }
};