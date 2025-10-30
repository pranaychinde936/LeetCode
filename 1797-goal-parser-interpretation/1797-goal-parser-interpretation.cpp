class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int n = command.size();

        for(int i=0; i<n; i++){
            if(command[i] == '('){
                if(command[i+1] == ')'){
                    ans.push_back('o');
                    i++;
                }         
                else{
                    ans = ans + "al";
                    i += 3;
                }
            }
            else{
                ans.push_back(command[i]);
            }
        }

        return ans;
    }
};