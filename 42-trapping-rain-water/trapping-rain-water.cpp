class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftMax(20000);
        vector<int>rightMax(20000);
        leftMax[0]=height[0];
        rightMax[n-1]=height[n-1];

        // calculate leftmax
        for(int i=1;i<n;i++){
            leftMax[i]=max(leftMax[i-1],height[i-1]);
        }

        // calculate rightmax
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],height[i+1]);
        }

        // calculate maxWater trap
        int maxWaterTrap=0;
        for(int i=0;i<n;i++){
            int currWater=min(leftMax[i],rightMax[i])-height[i];

            if(currWater>0){
                maxWaterTrap+=currWater;
            }
        }
        return maxWaterTrap;
    }
};