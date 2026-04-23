class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char, pair<int, int>> mp;

        int n = s.length();
        for(int i=0; i<n; i++){
            char ch = s[i];
            if(mp.find(ch) == mp.end()){
                mp[ch].first = i;
            }
            mp[ch].second = max(i, mp[ch].second);
        }

        // for(auto pr : mp){
        //     cout<< pr.first<< " " << pr.second.first<< " "<< pr.second.second<< endl;
        // }

        map<char, bool> vis;

        for(int i=0; i<n; i++){
            char ch = s[i];
            if(vis.find(ch) != vis.end())         continue;

            int rangeS = mp[ch].first;
            int rangeE = mp[ch].second;

            // cout<< "starting range check for "<< s[i]<< endl;
            // cout<< "marking "<< ch<< " as visited outside"<< endl;
            vis[ch] = true;
            for(int j = i; j<n; j++){
                int currRangeS = mp[s[j]].first;
                int currRangeE = mp[s[j]].second;
                if(ch != s[j] && (currRangeS > rangeS && currRangeS < rangeE)){
                    // cout<< "marking "<< s[j]<< " as visited"<< endl;
                    vis[s[j]] = true;
                    rangeE = max(rangeE, currRangeE);
                }
            }
            // for(auto pr : mp){
            //     if(ch != pr.first && (pr.second.first > rangeS && pr.second.first < rangeE)){
            //         cout<< "marking "<< pr.first<< " as visited"<< endl;
            //         vis[pr.first] = true;
            //         rangeE = max(rangeE, pr.second.second);
            //     }
            // }
            cout<< rangeS<< " "<< rangeE<< endl;
            ans.push_back(rangeE-rangeS+1);
        }

        return ans;
    }
};