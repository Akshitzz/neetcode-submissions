class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int >>a;
        for(int i =0;i<nums.size();i++){
            a.push_back({nums[i],i});
        }
        sort(a.begin(), a.end());
        int start =0 ;int end =nums.size()-1;
        while(start<end){
            int curr = a[start].first+a[end].first;
            if(curr==target){
                int first = a[start].second;
                int second = a[end].second;
                if (first > second) swap(first, second);
                return {first, second};
            }else if (curr<target){
                    start++;
            }else{
                end--;
            }
        }
        return {};
    }
};