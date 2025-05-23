/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1, h = n;
        int mid;

        while(l <= h){
            mid = l + (h-l)/2;
            int pick = guess(mid);

            if(pick == 0)           return mid;

            if(pick < 0)            h = mid - 1;
            else                    l = mid + 1;
        }

        return -1;
    }
};