class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&nums,vector<int>&temp,unordered_set<int>st,int n ){
        if(temp.size()==n){
            ans.push_back(temp);
        }
        for(int i =0;i<n;i++){
                if(!st.count(nums[i])){
                    temp.push_back(nums[i]);
                    st.insert(nums[i]);
                    solve(nums,temp,st,n);
                    temp.pop_back();
                    st.erase(nums[i]);
                }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n =nums.size();
        vector<int>temp;
        unordered_set<int>st;
        solve(nums,temp,st,n);
        return ans ;
    }
};
