class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans = 0;

        int sm = 0;
        for(int i=0; i<k; i++){
            sm = sm + cardPoints[i];
        }

        ans = max(ans, sm);
        int i = k-1, j = cardPoints.size()-1;

        while(i >= 0){
            sm = sm - cardPoints[i];
            i--;
            sm = sm + cardPoints[j];
            j--;
            ans = max(ans, sm);
        }
        
        return ans;
    }
};