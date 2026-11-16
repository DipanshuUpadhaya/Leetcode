class Solution {
public:
    int maxArea(vector<int>& height) {
        // // brute force
        // int mxWater=0;
        // int n=height.size();
        // for (int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         int w=j-i;
        //         int h=min(height[i],height[j]);
        //         int currWater=w*h;
        //         mxWater=max(currWater,mxWater);
        //     }

        // }
        // return mxWater;

        // OPtimize 2 pointer approach
        int mxWater=0;
        int n=height.size();
        int left=0,right=n-1;
        while(left<right){
            int w=right-left;
            int h=min(height[left],height[right]);
            int currWater=w*h;
            mxWater=max(mxWater,currWater);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return mxWater;
    }
};