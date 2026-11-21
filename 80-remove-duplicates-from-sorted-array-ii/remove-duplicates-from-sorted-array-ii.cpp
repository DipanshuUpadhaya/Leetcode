class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int count=1;
        for (int i=0;i<n;i++){
           if(i>0 && nums[i]==nums[i-1] ){
            count++;
           }
           else{
            count=1;
           }
           if(count<=2){
            ans.push_back(nums[i]);
           }
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};