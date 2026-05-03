class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&subsets,vector<int>&nums,int idx,int size){
        //base cond to stop the recursion at tail
        if(idx>=size){
        ans.push_back(subsets); 
        return ;   
        }
        //tree ->took the element 
        subsets.push_back(nums[idx]);
        solve(ans,subsets,nums,idx+1,size);
        //tree->didnt took the element
        subsets.pop_back();
        solve(ans,subsets,nums,idx+1,size);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subsets;
        int n = nums.size();
        solve(ans,subsets,nums,0,n);
        return ans;
    }
};
