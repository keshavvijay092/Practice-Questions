class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int res = 0;
        int s = 0;
        int e = x;
        
        while(s<=e){
            int mid = s+(e-s)/2;

            if(mid <= x/mid)
            {
                res = mid;
               s = mid+1;
            }
            else
            {
                e = mid-1;
            }
        }
        return res;
    }
};