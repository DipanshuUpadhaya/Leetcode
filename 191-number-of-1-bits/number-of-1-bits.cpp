class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n>0){
            int lastDigit=n&1;
            count+=lastDigit;
            n=n>>1;
        }
        return count;
    }
};