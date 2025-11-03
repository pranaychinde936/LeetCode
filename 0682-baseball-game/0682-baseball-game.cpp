class Solution {
public:
    int calPoints(vector<string>& operations) {
        deque<int> dq;

        for(auto op : operations){
                if(op == "C"){
                    dq.pop_back();
                }
                else if(op == "D"){
                    dq.push_back(dq[dq.size()-1] * 2);
                }
                else if(op == "+"){
                    int sz = dq.size();
                    dq.push_back(dq[sz-1] + dq[sz-2]);
                }
                else{
                    dq.push_back(stoi(op));
                }
        }

        int ans = 0;
        for(auto ele : dq){
            ans += ele;
        }

        return ans;
    }
};