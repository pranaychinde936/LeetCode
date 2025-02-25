class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;

        for(int i=0; i<jewels.length(); i++){
            st.insert(jewels[i]);
        }

        int ans = 0; 

        for(int i=0; i<stones.length(); i++){
            if(st.find(stones[i]) != st.end())          ans++;
        }

        return ans;
    }
};