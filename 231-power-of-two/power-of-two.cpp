class Solution {
public:
    bool isPowerOfTwo(int n) {
    // Using bits 
    // // if a number is power of 2 then we perform & operation to its (n & n-1) gives 0.
    //    if(n>0 && (n&(n-1))==0){
    //     return true;
    //    }
    //    return false;
    

    // normal approach
    double power;
    for(int i=0;i<=31;i++){
        power=pow(2,i);
        if(power==n){
            return 1;
        }
    }
    return 0;
    
    }
};