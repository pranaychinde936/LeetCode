class Solution {
private:
    int binSearch(vector<int> &nums, int no){
        int low = 0, high = nums.size()-1;
        int mid;
        while(low <= high){
            mid = low + (high-low)/2;
            
            if(nums[mid] == no){
                return mid;
            }
            else if(no < nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout<< "returning -1";
        return -1;
    }

    vector<int> getLevelRow(int level){
        int start = pow(2, level-1);
        int end = pow(2, level)-1;

        vector<int> row;
        for(int i=start; i <= end; i++){
            row.push_back(i);
        }

        return row;
    }
public:
    vector<int> pathInZigZagTree(int label) {
        int level = 0, n = label;
        vector<int> ans;
        ans.push_back(label);

        while(n){
            level++;
            n = n/2;
        }

        cout<< level<< endl;
        vector<int> row = getLevelRow(level);

        int pos = binSearch(row, label);
        if(level % 2 == 0){
            pos = row.size()-pos-1;
        }
        level--;

        while(level > 0){
            row = getLevelRow(level);
            if(level % 2 == 0){
                reverse(row.begin(), row.end());
            }

            pos = pos/2;
            ans.push_back(row[pos]);

            level--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};