class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // final optimal approach
        // int ans=0;
        // for (int value:nums){
        //     ans=ans^value;
        // }
        // return ans;
        
        // // brute force approach
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n-1;i+=2){
        //     if(nums[i]!=nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return nums[n-1];



        // // using unordered map
        // unordered_map<int,int>mp;
        // for(int num:nums){
        //     mp[num]++;
        // }
        // for(auto it:mp){
        //     if(it.second==1){
        //         return it.first;
        //     }
        // }
        // return -1;


        // using unordered set
        unordered_set<int>st;
        for(int num:nums){
            if(st.find(num)!=st.end()){
                st.erase(num);
            }
            else{
                st.insert(num);
            }
        }
        return *st.begin();
    }
};