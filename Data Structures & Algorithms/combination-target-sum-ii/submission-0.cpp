class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,int total,vector<int>&curr,int target,int i){
        if(total ==target){
            ans.push_back(curr);
            return;
        }
        if(total>target ||i==nums.size()){
            return ;
        }
        //choosing the element
        curr.push_back(nums[i]);
        solve(nums,total+nums[i],curr,target,i+1);
        //skipping duplicates
        while(i+1<nums.size()&& nums[i]==nums[i+1]){
            i++;
        }
        //skipping the element 
        curr.pop_back();
        solve(nums,total,curr,target,i+1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int total =0;
        vector<int>curr;
        sort(candidates.begin(),candidates.end());
        solve(candidates,total,curr,target,0);
        return ans;
    }
};
