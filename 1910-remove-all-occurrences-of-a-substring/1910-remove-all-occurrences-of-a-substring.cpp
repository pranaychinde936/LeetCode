class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length(), m = part.length();
        if(m > n)           return s;

        stack<char> st;
        string ans = "";

        int j=m-1;

        for(int i=0; i<n; i++){
            st.push(s[i]);

            if(st.top() == part[j]){
                string temp = "";
                while(!st.empty() && j >= 0 && st.top() == part[j]){
                    temp.push_back(st.top());
                    st.pop();
                    j--;
                }

                if(j != -1){
                    reverse(temp.begin(), temp.end());
                    for(char c : temp){
                        st.push(c);
                    }
                }
                j = m-1;
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};