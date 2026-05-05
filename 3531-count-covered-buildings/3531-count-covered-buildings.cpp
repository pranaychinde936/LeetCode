class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, set<int>> rowMap, colMap;

        for (auto& b : buildings) {
            rowMap[b[0]].insert(b[1]);
            colMap[b[1]].insert(b[0]);
        }

        int ans = 0;
        for (auto& b : buildings) {
            int x = b[0], y = b[1];

            auto& rowSet = rowMap[x];
            auto& colSet = colMap[y];

            bool hasLeft = rowSet.begin() != rowSet.find(y);
            bool hasRight = rowSet.upper_bound(y) != rowSet.end();
            bool hasUp = colSet.begin() != colSet.find(x);
            bool hasDown = colSet.upper_bound(x) != colSet.end();

            if (hasLeft && hasRight && hasUp && hasDown) {
                ans++;
            }
        }

        return ans;
    }
};
