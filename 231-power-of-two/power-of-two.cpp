class Solution {
public:
    bool isPowerOfTwo(int n) {
    // if a number is power of 2 then we perform & operation to its (n & n-1) gives 0.
       if(n>0 && (n&(n-1))==0){
        return true;
       }
       return false;
    }
};