class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&subsets,vector<int>&nums,int idx){
        if(idx>=nums.size()){
            ans.push_back(subsets);
            return ;
        }
        //decision tree ->taking the element
        subsets.push_back(nums[idx]);
        //next idx
        solve(ans,subsets,nums,idx+1);
        //removing the element moving to next idx
        subsets.pop_back();
        solve(ans,subsets,nums,idx+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subsets;
        solve(ans,subsets,nums,0);
        return ans;
    }
};
