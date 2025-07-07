class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> hash;
        int maxVowel = 0, maxConsonent = 0;

        for(auto ch : s){
            hash[ch]++;
        }

        for(auto ch : s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                maxVowel = max(maxVowel, hash[ch]);
            }
            else{
                maxConsonent = max(maxConsonent, hash[ch]);
            }
        }


        return maxVowel + maxConsonent;
    }
};