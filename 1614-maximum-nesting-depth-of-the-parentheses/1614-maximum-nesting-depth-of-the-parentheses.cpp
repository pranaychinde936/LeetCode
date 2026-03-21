class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;

        int ans = 0;
        for(auto ch : s){
            if(ch == '('){
                st.push(ch);
                int sz = st.size();
                ans = max(ans, sz);
            }
            else if(ch == ')'){
                st.pop();
            }
        }

        return ans;
    }
};