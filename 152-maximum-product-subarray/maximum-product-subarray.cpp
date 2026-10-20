class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int maxProd=nums[0];
       
        for(int st=0;st<nums.size();st++){
            int currProd=1;
            for(int end=st;end<nums.size();end++){
                currProd*=nums[end];
                maxProd=max(maxProd,currProd);
            }
        }
        return maxProd;
    }
};