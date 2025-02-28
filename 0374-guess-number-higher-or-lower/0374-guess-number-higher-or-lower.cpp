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
        int c=1;
        int r=n;
        while(1){
            int mid=c+(r-c)/2;
            int pick=guess(mid);
            if(pick==0)return mid;
            else if(pick==1)c=mid+1;
            else r=mid-1;
        }
    }
};