class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> st;

        for(char ch : sentence){
            st.insert(ch);
        }

        return st.size() == 26;
    }
};