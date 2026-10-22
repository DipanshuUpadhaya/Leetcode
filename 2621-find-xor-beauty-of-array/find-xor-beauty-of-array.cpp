class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans=0;
        int n=nums.size();

        // brute force
        // for (int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         for(int k=0;k<n;k++){
        //             int val=((nums[i]|nums[j])& nums[k]);
        //             ans=ans^val;
        //         }
        //     }
        // }
        // return ans;

        // optimized
        int a=0,b=0;
        for(int i=0;i<n;i++){
            a=a|nums[i];
            b=b^nums[i];
        }
        return (a&b);
    }
};