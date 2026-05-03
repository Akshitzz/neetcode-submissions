class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);
        for(char st :s){
            count[st-'a']++;
        }
        for(char st :t){
            count[st-'a']--;
        }
       for(int i =0;i<count.size();i++){
        if(count[i]==0){
            continue;
        }else{
            return false   ;
        }
       }
       return true ;
    }
};