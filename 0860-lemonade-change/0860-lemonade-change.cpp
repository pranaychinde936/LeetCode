class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0, tens = 0;
        int n = bills.size();

        for(int i=0; i<n; i++){
            if(bills[i] == 5){
                fives++;
            }
            else if(bills[i] == 10){
                if(fives < 1)               return false;

                tens++;
                fives--;
            }
            else{
                if(tens > 0 && fives > 0){
                    tens--;
                    fives--;
                }
                else if(fives >= 3){
                    fives = fives - 3;
                }
                else            return false;
            }
        }

        return true;
    }
};