class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> hash;

        for(auto path : paths){
            hash[path[0]]++;
        }

        for(auto path : paths){
            if(hash[path[1]] == 0)          return path[1];
        }

        return "";
    }
};