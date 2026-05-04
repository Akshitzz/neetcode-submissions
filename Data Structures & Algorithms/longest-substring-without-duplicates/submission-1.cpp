class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.size();
        int left =0;
        int right =0;
        int maxlength =0;
        unordered_set<char>st;
        while(right<s.size()){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlength=max(right-left+1,maxlength);
            right++;
        }
        return maxlength;
    }
};
