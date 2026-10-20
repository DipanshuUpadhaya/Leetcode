class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // if(nums.empty()){
        //     return 0;
        // }
        // int maxProd=nums[0];
       
        // for(int st=0;st<nums.size();st++){
        //     int currProd=1;
        //     for(int end=st;end<nums.size();end++){
        //         currProd*=nums[end];
        //         maxProd=max(maxProd,currProd);
        //     }
        // }
        // return maxProd;


        // Optimized approach
        int currMax=nums[0];
        int currMin=nums[0];
        int maxProduct=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(currMax,currMin);
            }
            currMax=max(nums[i],currMax*nums[i]);
            currMin=min(nums[i],currMin*nums[i]);

            maxProduct=max(maxProduct,currMax);
        }
        return maxProduct;
    }
};