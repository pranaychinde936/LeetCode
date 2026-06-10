class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size();
        int n = colSum.size();
        vector<vector<int>> ans(m, vector<int> (n, 0));

        int i = 0, j = 0;

        while(i < m && j < n){
            if(rowSum[i] < colSum[j]){
                ans[i][j] = rowSum[i];
                colSum[j] -= rowSum[i];
                rowSum[i] = 0;
                i++;
            }
            else if(rowSum[i] > colSum[j]){
                ans[i][j] = colSum[j];
                rowSum[i] -= colSum[j];
                colSum[j] = 0;
                j++;
            }
            else{
                ans[i][j] = rowSum[i];
                i++; j++;
            }
        }

        return ans;
    }
};