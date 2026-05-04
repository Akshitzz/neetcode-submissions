class Solution {
public:
        vector<vector<int>>ans;
void solve(vector<int>&nums,vector<int>&curr,int target,int i){
    if(target ==0){
        ans.push_back(curr);
        return;
    }
    if(target<0|| i>=nums.size()){
        return ;
    }
    //left subtree taking the element
    curr.push_back(nums[i]);
    solve(nums,curr,target-nums[i],i);
    //not taking the element expploring the right subtree
    curr.pop_back();
    solve(nums,curr,target,i+1);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>curr;
        solve(nums,curr,target,0);
        return ans; 
    }
};
