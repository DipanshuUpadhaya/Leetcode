class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // //1st approach O(nlog n)

        // sort(nums.begin(),nums.end());
        // vector<int>ans;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(i>0 && nums[i]==nums[i-1]){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // for(int i=1;i<=n;i++){
        //     if(! binary_search(nums.begin(),nums.end(),i)){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        

        // 2nd approach using unordered set 

        int duplicate=-1;
        int missing =-1;
        int n=nums.size();
        unordered_set<int>st;
        for(int num:nums){
            if(st.find(num)!=st.end()){
                duplicate=num;
            }
            else{
                st.insert(num);
            }
        }
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                missing =i;
                break;
            }
        }
        return {duplicate,missing};

    }
};