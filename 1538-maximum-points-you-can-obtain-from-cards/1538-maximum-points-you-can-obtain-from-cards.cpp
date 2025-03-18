class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0;

        for(int i=0; i<k; i++){
            lsum += cardPoints[i];
        }

        int maxSum = lsum;

        int l = k-1, n = cardPoints.size();
        for(int i=n-1; i>=n-k; i--){
            lsum -= cardPoints[l--];
            rsum += cardPoints[i];

            maxSum = max(maxSum, lsum+rsum);
        }

        return maxSum;
    }
};