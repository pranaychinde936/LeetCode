class Solution {
public:
    bool isBalanced(string num) {
        int evenSum = 0, oddSum = 0;
        int n = num.length();

        for(int i=0; i<n; i+=2){
            evenSum += num[i] - 48;
        }

        for(int i=1; i<n; i+=2){
            oddSum += num[i] - 48;
        }

        return evenSum == oddSum;
    }
};