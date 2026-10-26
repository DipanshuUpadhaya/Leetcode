class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>answer;
        for(int i=0;i<queries.size();i++){
            int val=queries[i][0];
            int idx=queries[i][1];
            
            nums[idx]+=val;
            int sum=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]%2==0){
                    sum+=nums[j];
                }
            }
            answer.push_back(sum);
        }
        return answer;
    }
};