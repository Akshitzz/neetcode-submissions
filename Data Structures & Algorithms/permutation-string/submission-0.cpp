class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m =s2.size();
        if(n>m) return false;
        vector<int>charfreq(26,0);
        vector<int>winfreq(26,0);
        for(char &c:s1){
            charfreq[c-'a']++;
        }
        int r =0;
        int l =0;
        while (r<m){
            winfreq[s2[r]-'a']++;
            if((r-l+1)>n){
                winfreq[s2[l]-'a']--;
                l++;
            }
            if(winfreq==charfreq) return true;
            r++;
        }
        return false;
    }
};
