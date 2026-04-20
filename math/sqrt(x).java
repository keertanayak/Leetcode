// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

class Solution {
    public int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int LB=1;
        int UB=x/2;
        int result=0; //last valid sqrt value

        while(LB <= UB) {
            int mid= LB + (UB-LB)/2; // safer midpoint calculation
            if(mid <= x/mid){  // to check without multiplying
                result= mid;
                LB= mid+1;
            }
            else UB= mid-1;
        }
        return result;
    }
}
