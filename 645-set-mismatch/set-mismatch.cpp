class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        for(int i=1;i<=n;i++){
            if(! binary_search(nums.begin(),nums.end(),i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};