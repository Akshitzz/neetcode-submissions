class Solution {
public:
    bool isPalindrome(string s) {
        string test = "";
        for(char c : s){
            if(isalnum(c)){   
                test += tolower(c);
            }
        }

        int start = 0;
        int end = test.size() - 1;

        while(start < end){
            if(test[start] != test[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};