class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen ;
        int left =0;
        int right =0;
        int maxlength =0;
        while(right<s.size()){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxlength=max(right-left+1,maxlength);
            right++;
        }
        return maxlength;
    }
};
