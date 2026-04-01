class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> st;
        queue<int> q;

        st.insert(0);
        for(int key : rooms[0]){
            if(st.find(key) == st.end()){
                q.push(key);
            }
        }

        while(!q.empty()){
            int fr = q.front();
            if(st.find(fr) == st.end()){
                st.insert(fr);
                for(int key : rooms[fr]){
                    if(st.find(key) == st.end()){
                        q.push(key);
                    }
                }
            }
            q.pop();
        }

        return st.size() == rooms.size();
    }
};