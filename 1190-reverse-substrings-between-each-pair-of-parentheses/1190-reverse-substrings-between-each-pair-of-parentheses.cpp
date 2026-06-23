class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        int n = s.length();

        for(int i=0; i<n; i++){
            while(i<n && s[i] != ')'){
                st.push(s[i]);
                i++;
            }
            string temp = "";

            while(!st.empty() && st.top() != '('){
                temp.push_back(st.top());
                st.pop();
            }
            if(!st.empty())         st.pop();

            if(i == n){
                reverse(temp.begin(), temp.end());
                return temp;
            }   
            for(char ch : temp){
                st.push(ch);
            }
        }

        string temp = "";
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }

        reverse(temp.begin(), temp.end());
        return temp;
    }
};