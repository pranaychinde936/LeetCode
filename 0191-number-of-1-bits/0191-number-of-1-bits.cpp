class Solution {
public:
    int hammingWeight(int n) {
        int ans = 0;

        // //approach 1
        // for(int i=0; i<31; i++){
        //     if(n&1)         ans++;
        //     n = n>>1;
        // }

        //approach 2
        while(n){
            if(n&1)             ans++;
            n = n>>1;
        }

        return ans;
    }
};