class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        // // Brute force method
        // int n=nums.size();
        // int ans=0;
        // for (int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count==2){
        //         ans=ans^nums[i];
        //         nums[i]=-1;
        //     }
        // }
        // return ans;


        // Optimal solution using unordered set;
        int n=nums.size();
        unordered_set<int>st;
        int ans=0;
        for(int num:nums){
            if(st.find(num)!=st.end()){
                ans=ans^num;
            }
            else{
                st.insert(num);
            }
        }
        return ans;
    }
};