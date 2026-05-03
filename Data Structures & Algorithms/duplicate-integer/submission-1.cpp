class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> sr;
        for(int i =0;i<nums.size();i++){
            if(sr.contains(nums[i])){
                return true ;
            }
            sr.insert(nums[i]);
        }
        return false ;
    }
};