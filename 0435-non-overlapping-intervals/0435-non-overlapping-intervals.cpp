class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);

        int cnt = 0;
        int lastEndTime = INT_MIN;
        for(auto interval : intervals){
            if(interval[0] >= lastEndTime){
                cnt++;
                lastEndTime = interval[1];
            }
        }

        return intervals.size() - cnt;
    }
};