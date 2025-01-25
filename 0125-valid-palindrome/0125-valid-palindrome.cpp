class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length() == 0)         return true;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string t = "";
        for(int i=0; i<s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                t.push_back(s[i]);
            }
        }

        int i=0, j=t.length()-1;

        while(i<j){
            if(t[i] == t[j]){
                i++;j--;
            }
            else            return false;
        }

        return true;
    }
};