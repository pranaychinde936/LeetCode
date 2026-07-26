class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i = 0, n = intervals.size();


        while(i<n && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }

        int left = newInterval[0];
        int right = newInterval[1];

        while(i<n && intervals[i][0] <= newInterval[1]){
            left = min(left, intervals[i][0]);
            right = max(right, intervals[i][1]);
            i++;
        }

        ans.push_back({left, right});

        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};