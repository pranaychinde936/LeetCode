class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = 0, n = word.length();
        for(int i=0; i<n; i++){
            if(word[i] == ch){
                idx = i;
                break;
            }
        }

        int i=0;
        while(i<idx){
            swap(word[i], word[idx]);
            i++;
            idx--;
        }

        return word;
    }
};