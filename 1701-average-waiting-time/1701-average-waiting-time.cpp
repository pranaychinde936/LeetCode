class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans = 0;
        double startTime = customers[0][0];
        double endTime = 0;

        int n = customers.size();
        for(int i=0; i<n; i++){
            if(startTime < customers[i][0]){
                startTime = customers[i][0];
            }
            endTime = customers[i][1] + startTime;
            ans = ans + (endTime - customers[i][0]);
            startTime = endTime;
        }

        return (ans / n);
    }
};